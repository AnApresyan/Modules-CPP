#include "Fixed.hpp"

Fixed::Fixed(void): _value(0) 
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &number)
{
	std::cout << "Copy constructor called\n";
	this->setRawBits(number.getRawBits());
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
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
	std::cout << "getRawBits member function called\n";
	return this->_value;
}
