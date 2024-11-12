#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace std;

int main(int argc, char* argv{}) {

if (argc < 2)
    exit(-1);

//add single quote to the query statement
string query = "SELECT * FROM cust WHERE id='";
// user input is appended to the query string
query += argv[1];
// append single quote to the end of the query statement
// force the entire user input to be viewed as text and not comands or data
// still vulnerable if the user inputs a combination of quotes and comments
query +="'";
cout << query << endl;



try {
    // define a driver instance
    sql::Driver *driver = get_driver_instance();
    // create the connection on the local machine on the standard port for mysql
    // user and Password are the actual database passwords in this particular exampel
    sql::Connection *con = driver->connect("tcp://127.0.0.1:3306", "user", "Password");
    // set the schema to receive queries
    conn -> setSchema("customerDB");

    // execute the query statement
    sql::Statement *stmt = con -> createStatement();
    // get the results
    sql::ResultSet *res = stmt -> executionQuery(query);
    //read through the results and find records that match the query
    while (res -> next()) {
        for (int i = 1; i < 6; i++)
            cout << res -> getString(i) << ",";
        cout << res -> getString(6) << endl;
    }
// clean up
delete res;
delete stmt;
delete con;

} catch (sql::SQLException &e) {
    cout << "# ERR: SQLException in " <<__FILE__;
    cout << "(" <<__FUNCTION__ << ") on line " << __LINE__ << endl;
    cout << "# ERR: " << e.what();
    cout << " (MySQL error code: " << e.getErrorCode();
    cout << ", SQLSTATE: " << e.getSQLState() << ")" << endl;
}
    cout << endl;
    return 0;

}