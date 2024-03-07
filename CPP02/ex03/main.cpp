/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:52:59 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/05 16:52:55 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point p);

int main(void)
{
	const Point a;
	const Point b(6.7f, 4.3f);
	const Point c(9.87f, 0);
	const Point p(3, 0);
	
	std::cout << "a: " << a.getX() << "," << a.getY() << std::endl;
	std::cout << "b: " << b.getX() << "," << b.getY() << std::endl;
	std::cout << "c: " << c.getX() << "," << c.getY() << std::endl;
	std::cout << "p: " << p.getX() << "," << p.getY() << std::endl;
	
	if (bsp(a, b, c, p) == 1)
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;
	return 0;
}
