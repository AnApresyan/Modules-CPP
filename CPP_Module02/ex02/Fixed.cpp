#include "Fixed.hpp"

Fixed::Fixed(void): _value(0) 
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &number)
{
	// std::cout << "Copy constructor called\n";
	*this = number;
}

Fixed::Fixed(const int number)
{
	// std::cout << "Int constructor called\n";
	this->_value = number << this->bits;
}

Fixed::Fixed(const float number)
{
	// std::cout << "Float constructor called\n";
	this->_value = roundf(number * (1 << this->bits));
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called\n";
}

float Fixed::toFloat( void ) const
{
	return (this->_value / (float)(1 << this->bits));
}

int Fixed::toInt( void ) const
{
	return (this->_value >> this->bits);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int Fixed::getRawBits() const
{
	return this->_value;
}

Fixed &Fixed::operator=(const Fixed &number)
{
	// std::cout << "Copy assignment operator called\n";
	this->setRawBits(number.getRawBits());
	return *this;
}

bool Fixed::operator>(const Fixed &number)	const
{
	return (this->getRawBits() > number.getRawBits());
}

bool Fixed::operator<(const Fixed &number) const
{
	return (this->getRawBits() < number.getRawBits());
}

bool Fixed::operator>=(const Fixed &number) const
{
	return (this->getRawBits() >= number.getRawBits());
}

bool Fixed::operator<=(const Fixed &number)	const
{
	return (this->getRawBits() <= number.getRawBits());
}

bool Fixed::operator==(const Fixed &number)	const
{
	return (this->getRawBits() == number.getRawBits());
}

bool Fixed::operator!=(const Fixed &number)	const
{
	return (this->getRawBits()!= number.getRawBits());
}

Fixed Fixed::operator+(Fixed const &number)	const
{
	Fixed sum;

	sum.setRawBits(this->getRawBits() + number.getRawBits());
	return sum;
}

Fixed Fixed::operator-(Fixed const &number) const
{
	Fixed diff;

	diff.setRawBits(this->getRawBits() - number.getRawBits());
	return diff;
}

Fixed Fixed::operator*(Fixed const &number) const
{
	return (Fixed(this->toFloat() * number.toFloat()));
}

Fixed Fixed::operator/(Fixed const &number) const
{
	if (number.getRawBits() == 0)
		throw std::logic_error("Division by 0");
	return Fixed(this->toFloat() / number.toFloat());
}

Fixed &Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (copy);
}
Fixed &Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (copy);
}

Fixed &Fixed::min(Fixed &point1, Fixed &point2)
{
	if (point1 < point2)
		return (point1);
	return (point2);
}

const Fixed &Fixed::min(Fixed const &point1, Fixed const &point2)
{
	if (point1 < point2)
		return (point1);
	return (point2);
}

Fixed &Fixed::max(Fixed &point1, Fixed &point2)
{
	if (point1 > point2)
		return (point1);
	return (point2);
}

const Fixed &Fixed::max(Fixed const &point1, Fixed const &point2)
{
	if (point1 > point2)
		return (point1);
	return (point2);
}

std::ostream &operator<<(std::ostream &o, const Fixed &num)
{
	o << num.toFloat();
	return o;
}
