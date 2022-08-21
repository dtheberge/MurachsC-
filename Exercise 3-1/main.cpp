/*
* Author: Derryk Theberge
* Purpose: Murach's Exercise 3-1 Enahnce the Invoice Program
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "The Invoice Total Calculator 2.0\n\n";

	// get input
	char customer_type;
	cout << "Enter customer type (r/w/c): ";
	cin >> customer_type;

	double subtotal;
	cout << "Enter subtotal: \t";
	cin >> subtotal;


	double discount_percent;
	// set discount percent
	/*
	if (tolower(customer_type) == 'r') {
		if (subtotal < 100)
			discount_percent = 0.0;
		else if (subtotal > -100 && subtotal < 250)
			discount_percent = 0.1;
		else if (subtotal >= 250 && subtotal < 500)
			discount_percent = 0.2;
		else
			discount_percent = 0.3;
	}
	else if (tolower(customer_type) == 'w') {
		if (subtotal < 500)
			discount_percent = 0.4;
		else
			discount_percent = 0.5;
	}
	else if (tolower(customer_type) == 'c') {
		discount_percent = 0.25;
	}
	else {
		discount_percent = 0.0;
	}
	*/

	// Alternative Switch Statement
	switch (tolower(customer_type))
	{
	case 'r':
	case 'R':
		if (subtotal < 100)
			discount_percent = 0.0;
		else if (subtotal > -100 && subtotal < 250)
			discount_percent = 0.1;
		else if (subtotal >= 250 && subtotal < 500)
			discount_percent = 0.2;
		else
			discount_percent = 0.3;
		break;
	case 'w':
	case 'W':
		if (subtotal < 500)
			discount_percent = 0.4;
		else
			discount_percent = 0.5;
		break;
	case 'c':
	case 'C':
		discount_percent = 0.25;
		break;
	default:
		discount_percent = 0.0;
		break;
	}

	// calculate and round result
	double discount_amount = subtotal * discount_percent;
	discount_amount = round(discount_amount * 100) / 100;

	double invoice_total = subtotal - discount_amount;
	invoice_total = round(invoice_total * 100) / 100;

	// display output
	cout << "Discount percent: \t" << discount_percent << endl
		<< "Discount amount: \t" << discount_amount << endl
		<< "Invoice Total: \t\t" << invoice_total << endl << endl;

	cout << "Bye!\n\n";
}