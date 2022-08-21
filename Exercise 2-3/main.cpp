/*
* Author: Derryk Theberge
* Purpose: Murach's Exercise 2-3: Enhance the Guest Book program
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Guest Book\n\n";

	string first_name;
	cout << "First Name:\t";
	cin >> first_name;				// get first token only
	cin.ignore(100, '\n');			// discard leftover chars and newline

	char middle_initial;
	cout << "Middle Initial:\t";
	middle_initial = cin.get();		// to retrieve a single character
	cin.ignore(100, '\n');

	string last_name;
	cout << "Last Name:\t";
	getline(cin, last_name);		// gets entire line

	string city;
	cout << "City:\t\t";
	getline(cin, city);				// gets entire line

	string country;
	cout << "Country:\t";
	getline(cin, country);			// gets entire line

	cout << "\nENTRY\n";
	cout << first_name + " " + middle_initial + ". " + last_name + "\n";
	cout << city + ", " + country + "\n\n";

}