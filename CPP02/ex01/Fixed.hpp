/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:53:37 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/08 12:49:44 by rumachad         ###   ########.fr       */
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