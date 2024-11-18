#include <iostream>
#include<memory>
#include <string.h>
#include <xqilla/xqilla-simple.hpp>

using namespace std;

int main (int argc, char **argv) {
    string username;
    cout << "Enter username: ";
    getline(cin,username);
    string password;
    cout << "Enter password: ";
    getline(cin,password);

    // define what type of user we want
    // specifies user with username and password, to be filled in later
    // returns the value associated with "id" in a text format
    // this is the most important item for security. It must be built to witstand exploitation

    // the use of the single quotes makes this vulneragble to sql-injection type attacks
    // example exploit in the password field: 1' or '1'='1
    // creates password= '1' or '1'='1'
    // this will dump all the id's

    // exploit only the admin account
    // username input: admin' and ('1'='1' or '1='1
    // password input: p') and '1'='1
    // resultant query: //user[username='admin' and ('1'='1' or '1'='1' and password='p') and '1'1='1'1]//id/text()

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