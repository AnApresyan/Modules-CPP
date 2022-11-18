#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int _value;
		static const int rawBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &number);
		~Fixed();
		Fixed &operator=(Fixed const &number);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif