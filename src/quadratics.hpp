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
						std::string pb = "+" + std::to_string(b);
						std::string pc = "+" + std::to_string(c);
						if (b < 0) {
							pb = "-" + std::to_string(-1 * b);
						}
						if (c < 0) {
							pc = "-" + std::to_string(-1 * c);
						}
						std::cout << "f(x)=" << a << "x\u00B2" << pb << "x" << pc;
					}
					if (form == 1) {
						std::string ph = "-" + std::to_string(h);
						std::string pk = "+" + std::to_string(k);
						if (h < 0) {
							ph = "+" + std::to_string(-1 * h);
						}
						if (k < 0) {
							pk = "-" + std::to_string(-1 * k);
						}
						std::cout << "f(x)=" << a << "(x" << ph << ")\u00B2" << pk;
					}
				}
				void toVertexForm(void) {
					form = 1;
					h = vertex[0];
					k = vertex[1];
				}
				void toStandardForm(void) {
					form = 0;
					b = a * ((vertex[0] * -1) * 2);
					c = (a * std::pow(-1 * vertex[0], 2)) + vertex[1];
				}
				double getAOS(void) {
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