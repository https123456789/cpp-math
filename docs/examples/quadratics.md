---
title: Quadratics Example
namespace: cppmath::quadratics
nav_order: 1
has_toc: false
parent: Examples
---
# Quadratics
Namespace: `{{ page.namespace }}`

## Classes

- [`QuadraticEquation`](<https://https123456789.github.io/CPP-Math/quadratics/QuadraticEquation>)

## Example

`tests/quadratics.cpp`
```cpp
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

Parent function: f(x)=1x²+0x+0
Translated left 4 and up 1, with an x-axis reflection:
f(x)=-1(x+4)²+1
f(x)=-1x²-8x-15
```

<figure>
	<img src="https://user-images.githubusercontent.com/81256789/149603986-2ec4e8e2-7d85-4fa6-8002-d488ee992f06.png" style="width: 50%;" align="center">
	<figcaption>
		<p>A graph of the equation <code>f(x)=1x²+4x-1</code>.</p>
		<small>Graph created with <a href="https://www.desmos.com/calculator">Desmos</a>.</small>
	</figcaption>
</figure>