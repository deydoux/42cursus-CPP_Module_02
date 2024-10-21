#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int _point;
	static int const _bits;
public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &rhs);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
};


#endif
