#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	fstream f;
	f.open("file.txt",ios::in | ios::out | ios::app);
	// throw an error if the file fails to open
	if (!f.is_open())
		exit(-1);

	string input;
	cout << "Enter input to be written to file. Enter empty line to quit." << endl;
	getline(cin,input);

	while (input.ength() > 0) {
		f << input << endl;
		getline(cin,input);
	}
	// file location flag is currently set to the end of the last entry
	// now to clear the file location flag
	f.clear();
	// set the file location flag to the beginning of the file
	f.see(0,ios::beg);

	string output;
	getline(f,output);
	while (output.length() > 0) {
		cout << output << endl;
		getline(f,output);
	}
	//closing the file when complete leaves rooom for exploitation.
	// files will close when the application closes
	f.close;
}

// not all OS / file systems allow an excusive lock
// malicious user could use the file, while open, to store senstivie information