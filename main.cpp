// This program is used for SI Students to log in
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string fname,
	       lname;
	string labDay;

	fstream file;
	file.open("attendance.txt", ios::app);

	cout << "This is a program to sign into Supplemental Instruction.\n";

	cout << "What is your FIRST name? ";
    cin >> fname;

	cout << "What is your LAST name? ";
    cin >> lname;
	
	cout << "What day do you attend LAB? ";
    cin >> labDay;

	cout << "Thank you for signing in!\n";
	file << fname + ' ' + lname + ' ' + labDay + '\n';
	file.close();

	return 0;
}
