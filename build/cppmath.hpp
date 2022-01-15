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
				double aos = 0;
				int form = 0;
				void print(void) {
					if (form == 0) {
						std::cout << "f(x)=" << a << "x\u00B2+" << b << "x+" << c << std::endl;
					}
					if (form == 1) {
						std::cout << "f(x)=" << a << "(x-" << h << ")\u00B2+" << k << std::endl;
					}
				}
				void toVertexForm(void) {
					form = 1;
					int q = std::pow((b/2), 2);
					int m = -1 * (a * q);
					h = b / 2;
					k = c + m;
				}
				double getAOS(void) {
					toVertexForm();
					aos = -1 * h;
					return aos;
				}
				void moveUp(int amt) {
					c += 1 * amt;
				}
				void moveDown(int amt) {
					c -= 1 * amt;
				}
				void moveLeft(int amt) {
					b += 2 * amt;
					c -= std::pow(amt, 2);
				}
				void moveRight(int amt) {
					b -= 2 * amt;
					c += std::pow(amt, 2);
				}
		};
	}
}