#include <iostream>
#include "cppmath.hpp"

using QuadraticFunction = cppmath::quadratics::QuadraticFunction;

int main(int argc, char *argv[]) {
	QuadraticFunction func;
	func.moveLeft(2);
	std::cout << "For the quadratic equation: ";
	func.print();
	std::cout << "Axis of Symmetry: " << func.getAOS() << std::endl;
	return 0;
}