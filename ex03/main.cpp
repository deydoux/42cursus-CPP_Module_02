#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

// https://www.geogebra.org/classic/hudvgbcx
int main() {
	Point a(0, 0);
	Point b(4, 0);
	Point c(2, 4);

	Point d(2, 2);
	Point e(3.5, 2);
	Point f(3, 0);
	Point g(1, 1.5);

	std::cout << "d in abc: " << std::boolalpha << bsp(a, b, c, d) << std::endl;
	std::cout << "e in abc: " << std::boolalpha << bsp(a, b, c, e) << std::endl;
	std::cout << "f in abc: " << std::boolalpha << bsp(a, b, c, f) << std::endl;
	std::cout << "g in abc: " << std::boolalpha << bsp(a, b, c, g) << std::endl;
}
