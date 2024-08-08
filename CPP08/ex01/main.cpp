/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:23:14 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/08 11:49:08 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span span(10000);

	try {
		for (int i = 0;i < 10000;i++) {
			span.addNumber(-9090);
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
/* 	for (std::vector<int>::iterator it = lst->begin(); it != lst->end();it++) {
		std::cout << *it << std::endl;
	} */
	try {
		std::cout << "Longest span " << span.longestSpan() << std::endl;
		std::cout << "Shortest span " << span.shortestSpan() << std::endl;	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}