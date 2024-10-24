#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int _raw;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &rhs);
	~Fixed();
	int getRawBits() const;
	void setRawBits(const int raw);
};

#endif
