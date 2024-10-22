#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
	std::cerr << "Default Fixed constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _raw(n << _bits) {
	std::cerr << "Int Fixed constructor called" << std::endl;
}

Fixed::Fixed(float const n) : _raw(roundf(n * (1 << _bits))) {
	std::cerr << "Float Fixed constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other) {
	std::cerr << "Copy Fixed constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	std::cerr << "Copy assignment Fixed operator called" << std::endl;
	_raw = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cerr << "Fixed Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return (_raw);
}

void Fixed::setRawBits(int const raw) {
	_raw = raw;
}

float Fixed::toFloat() const {
	return (((float)_raw / (1 << _bits)));
}

int Fixed::toInt() const {
	return (_raw >> _bits);
}

bool Fixed::operator>(Fixed const &rhs) const {
	return (_raw > rhs._raw);
}

bool Fixed::operator<(Fixed const &rhs) const {
	return (_raw < rhs._raw);
}

bool Fixed::operator>=(Fixed const &rhs) const {
	return (*this > rhs || *this == rhs);
}

bool Fixed::operator<=(Fixed const &rhs) const {
	return (*this < rhs || *this == rhs);
}

bool Fixed::operator==(Fixed const &rhs) const {
	return (_raw == rhs._raw);
}

bool Fixed::operator!=(Fixed const &rhs) const {
	return (!(*this == rhs));
}

Fixed Fixed::operator+(Fixed const &rhs) const {
	Fixed result;
	result._raw = _raw + rhs._raw;
	return (result);
}

Fixed Fixed::operator-(Fixed const &rhs) const {
	Fixed result;
	result._raw = _raw - rhs._raw;
	return (result);
}

Fixed Fixed::operator*(Fixed const &rhs) const {
	Fixed result;
	result._raw = (_raw * rhs._raw) >> _bits;
	return (result);
}

Fixed Fixed::operator/(Fixed const &rhs) const {
	Fixed result;
	result._raw = (_raw << _bits) / rhs._raw;
	return (result);
}

Fixed &Fixed::operator++() {
	_raw++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed copy(*this);
	++*this;
	return (copy);
}

Fixed &Fixed::operator--() {
	_raw--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed copy(*this);
	--*this;
	return (copy);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a <= b)
		return (a);
	return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	if (a <= b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a >= b)
		return (a);
	return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	if (a >= b)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
	os << fixed.toFloat();
	return (os);
}
