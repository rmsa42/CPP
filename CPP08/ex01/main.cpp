/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:23:14 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/07 14:42:54 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span span(5);
	std::vector<int>* lst = span.getVector();

	try {
		span.addNumber(13);
		span.addNumber(8);
		span.addNumber(1);
		span.addNumber(1);
		span.addNumber(17);
		span.addNumber(3);
		span.addNumber(6);
		span.addNumber(9);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	for (std::vector<int>::iterator it = lst->begin(); it != lst->end();it++) {
		std::cout << *it << std::endl;
	}
	try {
		std::cout << "Longest span " << span.longestSpan() << std::endl;
		std::cout << "Shortest span " << span.shortestSpan() << std::endl;	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}