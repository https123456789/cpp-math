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
	std::cout << std::endl << std::endl;
	std::cout << "Parent function: ";
	QuadraticFunction newfunc;
	newfunc.print();
	std::cout << std::endl << "Translated left 4 and up 1, with a x-axis reflection:" << std::endl;
	newfunc.moveUp(1);
	newfunc.moveLeft(4);
	newfunc.a = newfunc.a * -1;
	newfunc.toVertexForm();
	newfunc.print();
	std::cout << std::endl;
	newfunc.toStandardForm();
	newfunc.print();
	std::cout << std::endl;
	return 0;
}