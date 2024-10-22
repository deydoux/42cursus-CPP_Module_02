#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
private:
	int _raw;
	static int const _bits = 8;
public:
	Fixed();
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &other);
	Fixed &operator=(Fixed const &rhs);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif
