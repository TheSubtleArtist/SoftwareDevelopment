#include <stdio.h>
#include <iostream>
#include <string.h>
#include "ldap.h" // import ldap specific functionality
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

    // deprecated because sends information insecurely
    rc = ldap_simple_bind_s( ld, NULL, NULL );

    if (rc != LDAP_SUCCESS) {
        fprint(stderr, "ldap_singple_bine_s: %s\n", ldap_err2string(rc));
        return (-1);
    }


    string d = "dc=example,dc=com";
    // request user's last name
    // open to injection query
    // entering a wildcard "*" is the most basic and reveals the most
    cout << "Enter user last name: ";
    std::string lastname;
    cin >> lastname;
    // build the query as a string
    string query = "sn="+lastname=")";
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