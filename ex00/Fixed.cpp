#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
	std::cerr << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other) {
	std::cerr << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	std::cerr << "Copy assignment operator called" << std::endl;
	_raw = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cerr << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cerr << "getRawBits member function called" << std::endl;
	return (_raw);
}

void Fixed::setRawBits(int const raw) {
	std::cerr << "setRawBits member function called" << std::endl;
	_raw = raw;
}
