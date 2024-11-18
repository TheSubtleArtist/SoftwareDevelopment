#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	// create a random file with a random filename that will be deleted when the application terminates
	FILE* temp =tmpfile();
	
	string input 
	cout << "Enter input to be written to file. Enter empty line to quit." << endl;
	getline(cin,input);

	while(input.length() > 0) {
		input += "\n";
		// replace the stream of character arrays with strings using fputs
		// put the strings into the tmp file
		fputs(input.c_str(),tmp);
		getline(cin,input);
	}
	//rewind to the beginning of the file
	rewind(tmp);
	char buf[256];
	// read from the file and output
	while (fgets(buf, sizeof(buf),tmp != NULL) {
		cout << buf;
	}
}