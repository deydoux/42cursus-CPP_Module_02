#include "Point.hpp"

Point::Point() {
	std::cerr << "Default Point constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {
	std::cerr << "(" << x << "," << y << ") Point constructor called" << std::endl;
}

Point::Point(Point const &other) : _x(other._x), _y(other._y) {
	std::cerr << "Copy Point constructor called" << std::endl;
}

Point &Point::operator=(Point const &) {
	std::cerr << "Copy assignement Point operator called" << std::endl;
	return (*this);
}

Point::~Point() {
	std::cerr << "Point destructor called" << std::endl;
}
