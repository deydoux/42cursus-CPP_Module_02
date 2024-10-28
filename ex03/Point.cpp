#include "Point.hpp"

Point::Point() {
	std::cerr << "Default Point constructor called" << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y) {
	std::cerr << "(" << x << "," << y << ") Point constructor called" << std::endl;
}

Point::Point(const Point &other): _x(other._x), _y(other._y) {
	std::cerr << "Point copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &) {
	std::cerr << "Point copy assignement operator called" << std::endl;
	return (*this);
}

Point::~Point() {
	std::cerr << "Point destructor called" << std::endl;
}

const Fixed Point::getX() const {
	return (_x);
}

const Fixed Point::getY() const {
	return (_y);
}
