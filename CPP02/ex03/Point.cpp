/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 01:24:08 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/05 16:16:57 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float fX, const float fY) : x(fX), y(fY) {}

Point::Point(const Point &cpy) : x(cpy.getX()), y(cpy.getY()) {}

Point	&Point::operator=(const Point &obj)
{
	(void)obj;
	return (*this);
}

Fixed	Point::getX() const
{
	return (x);
}

Fixed	Point::getY() const
{
	return (y);
}

Point::~Point() {}
