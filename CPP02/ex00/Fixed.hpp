/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:53:37 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/03 12:17:46 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &cpy);
	~Fixed();

	Fixed	&operator=(const Fixed &obj);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	
	int					_fixedPoint;
	static const int	_fractionalBits = 8;
};

#endif