#include <iostream>
#include "cppmath.hpp"

using QuadraticFunction = cppmath::quadratics::QuadraticFunction;

int main(int argc, char *argv[]) {
	QuadraticFunction func;
	func.print();
	func.moveLeft(2);
	std::cout << "For the quadratic equation: ";
	func.print();
	std::cout << func.getAOS() << std::endl;
	func.print();
	return 0;
}