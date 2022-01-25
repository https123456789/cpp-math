#include <iostream>
#include <cmath>

namespace cppmath {
	int pow(int n, int cnt) {
		int ret = 1;
		for (int i = 0; i < cnt; i++) {
			ret = ret * n;
		}
		return ret;
	}

	double pow(double n, int cnt) {
		double ret = 1;
		for (int i = 0; i < cnt; i++) {
			ret = ret * n;
		}
		return ret;
	}

	int factorial(int n) {
		int ret = 1;
		int q = n;
		while (q > 0) {
			ret *= q;
			q -= 1;
		}
		return ret;
	}

	double cpi(int accuracy = 10000) {
		double sum = 0.0;
		int dir = 1;
		for (int i = 0; i < accuracy; i++) {
			sum += dir / ((2.0 * i) + 1.0);
			dir *= -1;
		}
		return 4.0 * sum;
	}

	double degtrad(double d) {
		double r = 1;
		r = d * (cppmath::cpi() / 180.0);
		return r;
	}

	double degtrad(int d) {
		double r = 1;
		r = d * (cppmath::cpi() / 180.0);
		return r;
	}

	double radtdeg(double r) {
		double d = 1;
		d = r / (180 / cppmath::cpi());
		return d;
	}

	double radtdeg(int r) {
		double d = 1;
		d = r / (180 / cppmath::cpi());
		return d;
	}
	
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
					c = (a * cppmath::pow(-1 * vertex[0], 2)) + vertex[1];
				}
				double getAOS(void) {
					return vertex[0];
				}
				
				void moveUp(int amt) {
					vertex[1] += 1 * amt;
				}
				void moveDown(int amt) {
					vertex[1] -= 1 * amt;
				}
				void moveLeft(int amt) {
					vertex[0] -= 1 * amt;
				}
				void moveRight(int amt) {
					vertex[0] += 1 * amt;
				}
		};
	}
	
	namespace trigonometry {
		double cos(double angle, int accuracy = 10) {
			int count = 0;
			double ret = 0.0;
			for (count = 0; count < accuracy; count++) {
				ret += cppmath::pow(-1, count) * (cppmath::pow(angle, 2 * count) / cppmath::factorial(2 * count));
			}
			return ret * (cppmath::cpi() / 180);
		}

		double sin(double angle, int accuracy = 10) {
			int count = 0;
			double ret = 0.0;
			for (count = 0; count < accuracy; count++) {
				ret += cppmath::pow(-1, count) * (cppmath::pow(angle, (2 * count + 1)) / cppmath::factorial(2 * count + 1));
			}
			return ret * (cppmath::cpi() / 180);
		}
	}
}
