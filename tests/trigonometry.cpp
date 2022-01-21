#include <iostream>
#include <sstream>
#include <iomanip>
#include "cppmath.hpp"

int main(int argc, char *argv[]) {
	std::cout << "Trigonometry" << std::endl;
	double amt = 45.0;
	double input = cppmath::degtrad(amt);
	std::cout << input << std::endl;
	double output = cppmath::trigonometry::cos(input);
	std::cout << output << std::endl;
	//output = cppmath::radtdeg(output);
	//output.setf(std::ios::fixed,std::ios::floatfield);
	//output.precision(3);
	std::cout << "cos of " << amt << ": " << output << std::endl;
	return 0;
}