/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 00:27:52 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/28 22:41:43 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//----------------------Constructors----------------------------//

//Default Constructor
Fixed::Fixed() : _fixedPoint(0)
{
	/* std::cout << "Default constructor called" << std::endl; */
}

//Copy Constructor
Fixed::Fixed(const Fixed &cpy)
{
	/* std::cout << "Copy constructor called" << std::endl; */
	*this = cpy;
}

//Int FixedPoint Constructor
Fixed::Fixed(const int nbr)
{
	/* std::cout << "Int constructor called" << std::endl; */
	_fixedPoint = (nbr << Fixed::_fractionalBits);
}

//Float FixedPoint Constructor
Fixed::Fixed(const float nbr)
{
	/* std::cout << "Float constructor called" << std::endl; */
	_fixedPoint = roundf((nbr * (1 << Fixed::_fractionalBits)));
}

//--------------------------------------------------------------//


//-----------------------Class Methods--------------------------//

Fixed &Fixed::operator=(const Fixed &obj)
{
	/* std::cout << "Copy assignment operator called" << std::endl; */
	if (this != &obj)
		this->setRawBits(obj.getRawBits());
	return (*this);
}

int	Fixed::getRawBits() const
{
	/* std::cout << "getRawBits member function called" << std::endl; */
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	/* std::cout << "setRawBits member function called" << std::endl; */
	_fixedPoint = raw;
}

float	Fixed::toFloat() const
{
	return (((float)_fixedPoint / (float)(1 << Fixed::_fractionalBits)));	
}

int		Fixed::toInt() const
{
	return ((_fixedPoint >> Fixed::_fractionalBits));
}

std::ostream	&operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

//--------------------------------------------------------------//


//----------------------Comparison Overloads--------------------//

bool	Fixed::operator==(const Fixed &rightObj) const
{
	if (this->getRawBits() == rightObj.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &rightObj) const
{
	if (this->getRawBits() != rightObj.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &rightObj) const
{
	if (this->getRawBits() > rightObj.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &rightObj) const
{
	if (this->getRawBits() >= rightObj.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &rightObj) const
{
	if (this->getRawBits() < rightObj.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &rightObj) const
{
	if (this->getRawBits() <= rightObj.getRawBits())
		return (true);
	return (false);
}

//--------------------------------------------------------------//

//--------------------Arithmetic Overloads----------------------//

float	Fixed::operator+(const Fixed &rightObj) const
{
	return (this->toFloat() + rightObj.toFloat());
}

float	Fixed::operator-(const Fixed &rightObj) const
{
	return (this->toFloat() - rightObj.toFloat());
}

float	Fixed::operator*(const Fixed &rightObj) const
{
	return (this->toFloat() * rightObj.toFloat());
}

float	Fixed::operator/(const Fixed &rightObj) const
{
	return (this->toFloat() / rightObj.toFloat());
}

//--------------------------------------------------------------//

//--------------------Comparison Functions----------------------//

Fixed	&Fixed::min(Fixed &rgObj, Fixed &lfObj)
{
	if (rgObj > lfObj)
		return (lfObj);
	return (rgObj);
}

const Fixed	&Fixed::min(const Fixed &rgObj, const Fixed &lfObj)
{
	if (rgObj > lfObj)
		return (lfObj);
	return (rgObj);
}

Fixed	&Fixed::max(Fixed &rgObj, Fixed &lfObj)
{
	if (rgObj < lfObj)
		return (lfObj);
	return (rgObj);
}

const Fixed	&Fixed::max(const Fixed &rgObj, const Fixed &lfObj)
{
	if (rgObj < lfObj)
		return (lfObj);
	return (rgObj);
}

//--------------------------------------------------------------//


//----------------------Increment/Decrement Overloads-----------//

Fixed	&Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}

//--------------------------------------------------------------//


//Default Destructor
Fixed::~Fixed()
{
	/* std::cout << "Destructor called" << std::endl; */
}