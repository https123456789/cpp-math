#include <iostream>
#include "cppmath.hpp"

int main(int argc, char *argv[]) {
	// Angles
	double angleDegrees = 45.0;
	double angleRadians = 0.0;

	// Convert angle to radians
	angleRadians = cppmath::degtrad(angleDegrees);

	// Result variable
	double result = 0.0;

	// Calculate
	result = cppmath::trigonometry::cos(angleRadians);

	// Print result
	std::cout << "cos(45) = " << result << std::endl;
}