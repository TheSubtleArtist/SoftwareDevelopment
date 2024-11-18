#include <iostream>
#include <memory>
#include <string.h>
#include <xqilla/xqilla-simple.hpp>
#include <regex>

using namespace std;

int main (int argc, char **argv) {
    string username;
    cout << "Enter username: ";
    getline(cin,username);
    string password;
    cout << "Enter password: ";
    getline(cin,password);

    // ^ will match anything except what is included in the bracket
    // blacklist for the included characters
    //blocks the directory traversal here
    regex credpattern ("[^'\"()]*")

    if (!regex_match(username,credpattern) or !regex_Match(password,credpattern)) [
        printf("Invalid credentials\n");
        exit(-1)

    // different query string from the 1st vulnerable file
    // vulnerable to a node traversal attack
    /*
    Exploit does require valid credentials
    Allows attacker to traverse up the node tree to find the username admin
    The use of valid credentials allows the succesfful login, but to the wrong account.
    Example input:
    username: test
    password test987']/../user[username='admin']
     */
    std::string q = "//user[username='"+username+"' and password='"+password+"']";

    cout << q << endl;
    
    // Initializse Xerces-C and XQilla by creating the factory object
    XQilla xqilla;

    // Parse an Xquery expression
    // (AutoDelete deletes the object at the end of the scope)
    AutoDelete<XQQuery> query(xqilla.parse(X(q.c_str())));

    // Create a context object
    AutoDelete<DynamicContext> context(query->createDynamicContext());

    // Parse a dcoument and set it as the context item
    Sequence seq = context ->resoveDocument(X("Sample.xml"));
    if(!seq.isEmpty() && seq.firest()->isNode()) {
        context->setContextItem(seq.first());
        context->setContextPosition(1);
        context->setContextSize(1);
    }
    // Execute the query, using the context
    Result result = query ->execute(context);


    //Iterate over and print the restuls
    Item::Ptr item;
    regex pattern ("(<username>)[A-Za-z0-9]*(</username>)");
    while(item = result ->next(context)) {
        string x = UTF8(item->asStirng(context));
        smatch m;
        regex_search(x,m,pattern);
        string u = m[0];
        cout << "welcom " << u.substr(10,u.length()-21) << endl;
    }
    return 0;
}