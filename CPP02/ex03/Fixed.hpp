/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:53:37 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/28 22:34:16 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &cpy);
	Fixed(const int nbr);
	Fixed(const float nbr);
	~Fixed();

	Fixed			&operator=(const Fixed &obj);
	
	//Comparison Overloads
	bool			operator==(const Fixed &rightObj) const;
	bool			operator!=(const Fixed &rightObj) const;
	bool			operator>(const Fixed &rightObj) const;
	bool			operator>=(const Fixed &rightObj) const;
	bool			operator<(const Fixed &rightObj) const;
	bool			operator<=(const Fixed &rightObj) const;
	
	//Arithmetic Overloads
	float			operator+(const Fixed &rightObj) const;
	float			operator-(const Fixed &rightObj) const;
	float			operator*(const Fixed &rightObj) const;
	float			operator/(const Fixed &rightObj) const;
	
	//Comparison Functions
	static Fixed		&min(Fixed &rgObj, Fixed &lfObj);
	static const Fixed	&min(const Fixed &rgObj, const Fixed &lfObj);
	static Fixed		&max(Fixed &rgObj, Fixed &lfObj);
	static const Fixed	&max(const Fixed &rgObj, const Fixed &lfObj);
	
	//Increment/Decrement Overloads
	Fixed			&operator++();
	Fixed			operator++(int);
	Fixed			&operator--();
	Fixed			operator--(int);
	
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;

private:
	
	int					_fixedPoint;
	static const int	_fractionalBits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &obj);

#endif