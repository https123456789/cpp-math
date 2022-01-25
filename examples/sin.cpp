#include <iostream>
#include "cppmath.hpp"

int main(int argc, char *argv[]) {
	// Angle in degrees
	double angleDegrees = 45.0;
	
	// Angle in radians
	double angleRadians = cppmath::degtrad(angleDegrees);

	// Calculate
	double result = cppmath::trigonometry::sin(angleRadians);

	// Print result
	std::cout << "sin(x) = " << result << std::endl;
}