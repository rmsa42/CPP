/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:05:39 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/05 16:53:51 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(const Point &v1, const Point &v2, const Point &v3)
{
	float	area;

	area = (v1.getX() * (v2.getY() - v3.getY()) +
			v2.getX() * (v3.getY() - v1.getY()) +
			v3.getX() * (v1.getY() - v2.getY())) * 0.5f;
	if (area < 0)
		return (area * (-1));
	return (area);
}

bool	bsp(const Point a, const Point b, const Point c, const Point p)
{
	const float	A = area(a, b, c);
	const float	A1 = area(a, b, p);
	const float	A2 = area(a, c, p);
	const float	A3 = area(b, c, p);
	const float	tA = A1 + A2 + A3;
	
	if (A1 == 0 || A2 == 0 || A3 == 0)
		return (false);
	else if (tA == A)
		return (true);
	return (false);
}