/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 01:19:43 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/05 16:16:53 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
public:

	Point();
	Point(const float fX, const float fY);
	Point(const Point &cpy);
	~Point();

	Point	&operator=(const Point &obj);

	Fixed	getX(void) const;
	Fixed	getY(void) const;

private:

	const Fixed x;
	const Fixed y;
};

#endif