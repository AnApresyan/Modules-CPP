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
		Fixed(const Fixed &number);
		Fixed(const int number);
		Fixed(const float number);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(const int raw);

		Fixed &operator=(const Fixed &number);

		//comparison operators	
		bool operator>(const Fixed &number) 	const;
		bool operator<(const Fixed &number)		const;
		bool operator>=(const Fixed &number)	const;
		bool operator<=(const Fixed &number)	const;
		bool operator==(const Fixed &number)	const;
		bool operator!=(const Fixed &number) 	const;

		//arithmetic operators
		Fixed operator+(const Fixed &number) const;
		Fixed operator-(const Fixed &number) const;
		Fixed operator*(const Fixed &number) const;
		Fixed operator/(const Fixed &number) const;
 
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		static Fixed &min(Fixed &point1, Fixed &point2);
		static const Fixed &min(const Fixed &point1, const Fixed &point2);
		static Fixed &max(Fixed &point1, Fixed &point2);
		static const Fixed &max(const Fixed &point1, const Fixed &point2); 
		
};

std::ostream &operator<<(std::ostream &o, const Fixed &num);

#endif