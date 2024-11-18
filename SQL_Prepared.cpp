#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <<cppconn/prepared_statement.h>

using namespace std;

int main(int argc, char* argv{}) {

if (argc < 2)
    exit(-1);

// 
string query = "SELECT * FROM cust WHERE id=";
// user input is appended to the query string
// unvalidate - allowing user to inject any number of inputs to extract data from the database
query += argv[1];
cout << query << endl;



try {
    // define a driver instance
    sql::Driver *driver = get_driver_instance();
    // create the connection on the local machine on the standard port for mysql
    // user and Password are the actual database passwords in this particular exampel
    sql::Connection *con = driver->connect("tcp://127.0.0.1:3306", "user", "Password");
    // set the schema to receive queries
    conn -> setSchema("customerDB");

    sql::PreparedStatement *prep_statement = con -> prepareStatement("SELECT * FROM cust WHERE last_name=?");
    prep_statement -> setString(1,argv[1]);
    sql::ResultSet *res = prep_statement -> executeQuery();

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