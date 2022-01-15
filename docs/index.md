# CPP-Math Docs

[Download](<https://github.com/https123456789/CPP-Math/archive/refs/heads/main.zip>)

## Namespaces

- [`cppmath::quadratics`](<https://https123456789.github.io/CPP-Math/quadratics>)

## Examples

### Quadratics

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
```

```
$ ./tests/quadratics
For the quadratic equation: f(x)=1x²+4x+-4
Axis of Symmetry: -2
Standard form: f(x)=1x²+4x+-4
Vertex form: f(x)=1(x-2)²+-8
```

<img src="https://user-images.githubusercontent.com/81256789/149603986-2ec4e8e2-7d85-4fa6-8002-d488ee992f06.png" style="width: 50%;" alt="desmos graph image">