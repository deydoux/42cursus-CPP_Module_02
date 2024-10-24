#include "Fixed.hpp"

Fixed::Fixed(): _raw(0) {
	std::cerr << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n): _raw(n << _bits) {
	std::cerr << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n): _raw(roundf(n * (1 << _bits))) {
	std::cerr << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cerr << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cerr << "Copy assignment operator called" << std::endl;
	_raw = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cerr << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return (_raw);
}

void Fixed::setRawBits(const int raw) {
	_raw = raw;
}

float Fixed::toFloat() const {
	return (((float)_raw / (1 << _bits)));
}

int Fixed::toInt() const {
	return (_raw >> _bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return (os);
}
