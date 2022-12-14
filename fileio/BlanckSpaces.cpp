// C++ program to demonstrate the
// number of whitespaces in a
// file
#include <iostream>
#include <fstream>
#include <istrean>
#include <ostream>
using namespace std;

int main()
{
	// vairable to access file
	fstream f1;

	// string variable
	string ch;

	// counter variable
	int count = 0;

	// opening file for reading contents
	f1.open("file14.txt", ios::in);

	while (!f1.eof()) {
		// extracting words from file
		f1 >> ch;

		// incrementing counter variable
		count++;
	}
	f1.close();

	// displaying total number of whitespaces in a file
	cout << "There are"<< count <<" whitespaces in file";
	return 0;
}
