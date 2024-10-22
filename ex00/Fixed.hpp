#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int _raw;
	static int const _bits = 8;
public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &rhs);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif
