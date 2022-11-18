#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &number);
		Fixed(int const number);
		Fixed(float const number);
		~Fixed();
		Fixed &operator=(Fixed const &number);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);

		//comparison operators	
		Fixed &operator>(Fixed const &number);
		Fixed &operator<(Fixed const &number);
		Fixed &operator>=(Fixed const &number);
		Fixed &operator<=(Fixed const &number);
		Fixed &operator==(Fixed const &number);
		Fixed &operator!=(Fixed const &number);

		//arithmetic operators
		Fixed &operator+(Fixed const &number);
		Fixed &operator-(Fixed const &number);
		Fixed &operator*(Fixed const &number);
		Fixed &operator/(Fixed const &number);


};

std::ostream &operator<<(std::ostream &o, const Fixed &num);

#endif