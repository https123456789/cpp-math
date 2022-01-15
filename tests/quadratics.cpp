#include <iostream>
#include "cppmath.hpp"

using QuadraticFunction = cppmath::quadratics::QuadraticFunction;

int main(int argc, char *argv[]) {
	QuadraticFunction func;
	func.moveLeft(2);
	std::cout << "For the quadratic equation: ";
	func.print();
	std::cout << std::endl;
	std::cout << "Axis of Symmetry: " << func.getAOS() << std::endl;
	func.toStandardForm();
	std::cout << "Standard form: ";
	func.print();
	std::cout << std::endl;
	func.toVertexForm();
	std::cout << "Vertex form: ";
	func.print();
	std::cout << std::endl;
	return 0;
}