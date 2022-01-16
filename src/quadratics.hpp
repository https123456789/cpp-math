#include <iostream>
#include <cmath>

namespace cppmath {
	namespace quadratics {
		class QuadraticFunction {
			public:
				QuadraticFunction() {

				}
				~QuadraticFunction() {

				}
				int a = 1;
				int b = 0;
				int c = 0;
				int h = 0;
				int k = 0;
				int vertex[2] = {
					0,
					0
				};
				double aos = 0;
				int form = 0;
				void print(void) {
					if (form == 0) {
						std::cout << "f(x)=" << a << "x\u00B2+" << b << "x+" << c;
					}
					if (form == 1) {
						std::cout << "f(x)=" << a << "(x-" << h << ")\u00B2+" << k;
					}
				}
				void toVertexForm(void) {
					form = 1;
					//int q = std::pow((b/2), 2);
					//int m = -1 * (a * q);
					//h = b / 2;
					//k = c + m;
					h = vertex[0];
					k = vertex[1];
				}
				void toStandardForm(void) {
					form = 0;
					/*
						f(X)=-1(x--4)^2+1
						-1(x+4)(x+4)+1
						-1(x^2+8x+16)+1
						-x^2-8x-15
					*/
					b = a * ((vertex[0] * -1) * 2);
					c = (a * std::pow(-1 * vertex[0], 2)) + vertex[1];
				}
				double getAOS(void) {
					//toVertexForm();
					//aos = -1 * h;
					//toStandardForm();
					return vertex[0];
				}
				// Rewrite functions
				// use vertex form and adjust the vertex, the convert back to standard form
				void moveUp(int amt) {
					//toVertexForm();
					//k += 1 * amt;
					vertex[1] += 1 * amt;
					//toStandardForm();
				}
				void moveDown(int amt) {
					//toVertexForm();
					//k -= 1 * amt;
					vertex[1] -= 1 * amt;
					//toStandardForm();
				}
				void moveLeft(int amt) {
					vertex[0] -= 1 * amt;
					/*toVertexForm();
					h += 1 * amt;
					toStandardForm();*/
					//b += 2 * amt;
					//c -= std::pow(amt, 2);
				}
				void moveRight(int amt) {
					vertex[0] += 1 * amt;
					/*toVertexForm();
					h -= 1 * amt;
					toStandardForm();*/
					//b -= 2 * amt;
					//c += std::pow(amt, 2);
				}
		};
	}
}