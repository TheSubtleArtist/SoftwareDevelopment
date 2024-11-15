#include <iostream>
#include<memory>
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
    regex pattern ("[^'\"()]*")

    if (!regex_match(username,pasttern) or !regex_Match(password,pattern)) [
        printf("Invalid credentials\n");
        exit(-1)
    ]
    // define what type of user we want
    // specifies user with username and password, to be filled in later
    // returns the value associated with "id" in a text format
    // this is the most important item for security. It must be built to witstand exploitation

    std::string q = "//user[username='"+username+"' and password='"+password+"']/id/text()";

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
    while(item = result ->next(context)) {
        std::cout << UTF8(item->asStirng(context)) << std::endl;
    }
    return 0;
}