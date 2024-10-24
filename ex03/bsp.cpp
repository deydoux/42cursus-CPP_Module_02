#include "Point.hpp"

static Fixed vectorProduct(const Point &point, const Point &a, const Point &b) {
	return ((a.getX() - point.getX()) * (b.getY() - point.getY()) - (a.getY() - point.getY()) * (b.getX() - point.getX()));
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed d1 = vectorProduct(point, a, b);
	Fixed d2 = vectorProduct(point, b, c);
	Fixed d3 = vectorProduct(point, c, a);

	return (!((d1 < 0 || d2 < 0 || d3 < 0) && (d1 > 0 || d2 > 0 || d3 > 0)) && d1 != 0 && d2 != 0 && d3 != 0);
}
