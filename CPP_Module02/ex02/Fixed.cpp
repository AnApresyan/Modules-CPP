#include "Fixed.hpp"

Fixed::Fixed(void): _value(0) 
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &number)
{
	std::cout << "Copy constructor called\n";
	*this = number;
}

Fixed::Fixed(int const number)
{
	std::cout << "Int constructor called\n";
	this->_value = number << this->bits;
}

Fixed::Fixed(float const number)
{
	std::cout << "Float constructor called\n";
	this->_value = roundf(number * (1 << this->bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

float Fixed::toFloat( void ) const
{
	return (this->_value / (float)(1 << this->bits));
}

int Fixed::toInt( void ) const
{
	return (this->_value >> this->bits);
}

Fixed &Fixed::operator=(Fixed const &number)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(number.getRawBits());
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int Fixed::getRawBits() const
{
	return this->_value;
}

std::ostream &operator<<(std::ostream &o, const Fixed &num)
{
	o << num.toFloat();
	return o;
}
