#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed(int point) : _point(point) {
	std::cerr << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cerr << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cerr << "Copy assignment operator called" << std::endl;
	this->_point = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cerr << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cerr << "getRawBits member function called" << std::endl;
	return (this->_point);
}

void Fixed::setRawBits(int const raw) {
	std::cerr << "setRawBits member function called" << std::endl;
	this->_point = raw;
}
