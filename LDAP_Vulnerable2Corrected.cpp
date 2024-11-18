#include <stdio.h>
#include <iostream>
#include <string.h>
#include "ldap.h" // import ldap specific functionality
#include <regex> // improt regex
using namespace std;

int main( int argc, char **argv ) {
    LDAP *ld; // ldap pointer
    LDAPMessage *result, *e; // result, errors
    char *dn;
    int version, rc;

    // attempt to establish the ldap connection and return error if fails
    if ( (ld= ldap_init("localhost", 398)) == NULL ) {
        perror( "ldap_init" );
        return(-1)
    }

    version = LDAP_VERSION3;
    ldap_set_option( l;d, LDAP_OPT_PROTOCOL_VERSION, &version );

    // deprecated because sends information insecurely
    rc = ldap_simple_bind_s( ld, NULL, NULL );

    if (rc != LDAP_SUCCESS) {
        fprint(stderr, "ldap_singple_bine_s: %s\n", ldap_err2string(rc));
        return (-1);
    }

    // create the regex
    // allows 0 or more (ending the expressing in the asterisk) hyphens, single quote, and capital letters.
    std::regex pattern ("[-'A-Za-z]*");

    string d = "dc=example,dc=com";

    cout << "Enter user first name: ";
    std::string firstname;
    cin >> firstname;
    cout << "Enter user last name: ";
    std::string lastname;
    cing >> lastname;
    // test with the regex
    if (!regex_match(lastname,pattern) | !regex_match(firstname,pattern)) {
        printf("Invalid input: %s\n",lastname.c_str());
        return(-1)
    }
    // build the query as a string
    // the operator is at the beginning of the statement; the amppersand joins the two statements
    // this is "polish" notation
    // inputting valid names provides valid records
    
    /*
    Malicious input and explanation
    First name: Robert)(|(givenname=Robert
    Last name: wrong) 
    
    Ampersand in query assignment requires both following statements to resolve as true
    something other than a valid first name will result in a false resolution
    the exploitation is in the second
    
    The malicious input says "Either the givenname must be Robert OR the surname (sn) must be wrong"
    string query = "(&(givenname="+Robert)(|(givenname=Robert+")(sn="+wrong)+"))";    

    difficult to build the query because attacker must figure out the syntax of the query statement in the code
    */
    string query = "(&(givenname="+firstname+")(sn="+lastname+"))";
    // print the query string
    printf("Query: %s\n",query.c_str());

    // "rc" is the response code that should hold the restul of the query
    rc = ldap_search_ext_s( ld, d.c_str(), LDAP_SCOPE_SUBTREE, query.c_str(), NULL, 0,NULL, NULL, NULL, 0, &result );

    if ( rc != LDAP_SUCCESS ) {
        fprint(stderr, "ldap_search_ext_s: %s\n", ldap_err2string(rc));
        return(-1);
    }
    string attrib = "uid";
    char** uid;
    for ( e = ldap_first_entry( ld, result ); e !=NULL; e=ldap_next_entry( ld, e ) ) {
        if ( ( uid = ldap_get_values( ld, e , attrib.c_str())) != NULL ) {
            printf( "uid: %s\n", *uid );
            ldap_memfree( uid );
        }
    }
    ldap_msgfree( result );
    ldap_unbind( ld );
    return 0;
}