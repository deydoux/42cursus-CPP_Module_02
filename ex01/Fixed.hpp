#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
private:
	int _raw;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &rhs);
	~Fixed();
	int getRawBits() const;
	void setRawBits(const int raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
