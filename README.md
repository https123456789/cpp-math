# CPP-Math
A simple library for math in C++.

## Quadratics

`tests/quadratics.cpp`
```
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
```

```
$ ./tests/quadratics
For the quadratic equation: f(x)=1x²+4x+-4
Axis of Symmetry: -2
```