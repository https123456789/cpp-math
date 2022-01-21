#include <iostream>
#include "cppmath.hpp"

int main(int argc, char *argv[]) {
	// Radian values to convert
	double doubleRadianValue = 0.890118;
	int intRadianValue = 0;

	// Conversion result variables
	double doubleDegreeValue = 0.0;
	double intDegreeValue = 0.0;
	
	// Convert values
	doubleDegreeValue = cppmath::radtdeg(doubleRadianValue);
	intDegreeValue = cppmath::radtdeg(intRadianValue);

	// Print results
	std::cout << "Double radian value: " << doubleRadianValue << std::endl;
	std::cout << "Converted to degrees: " << doubleDegreeValue << std::endl;
	std::cout << "Int radian value: " << intRadianValue << std::endl;
	std::cout << "Converted to degrees: " << intDegreeValue << std::endl;
}