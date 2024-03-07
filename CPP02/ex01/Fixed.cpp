/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 00:27:52 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/24 00:57:12 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = (nbr << Fixed::_fractionalBits);
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf((nbr * (1 << Fixed::_fractionalBits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPoint = obj.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	/* std::cout << "getRawBits member function called" << std::endl; */
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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
