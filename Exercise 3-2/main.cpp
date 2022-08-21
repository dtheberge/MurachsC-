/*
* Author: Derryk Theberge
* Purpose: Calculate the area of a rectangle
*/

#include <iostream>

int main() {
	// Print the name of the program
	std::cout << "-- Rectangle Area Calculator --" << std::endl << std::endl;

	// Get the area and the width
	double width, height;
	std::cout << "Enter the width of the recatngle: ";
	std::cin >> width;

	std::cout << "Enter the height of the rectangle: ";
	std::cin >> height;

	if (width > 0 && height > 0) {
		// Calculate and print the area
		double area = height * width;
		std::cout << "\nThe area of the rectangle is " << area << " units squared." << std::endl;
	}
	else {
		std::cout << "\n\nHeight and width must be greater than 0.\n";
	}

}