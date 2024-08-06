/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:39:57 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/06 14:13:50 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define SIZE 100

class A
{
public:
	A() {std::cout << "Hello" << std::endl;}
};

int main()
{
	Array<int> tmp(SIZE);
	Array<char> c(SIZE);
	Array<A> a(SIZE);

	for (int i = 0; i < SIZE; i++) {
		tmp[i] = i;
		c[i] = i - 1;
	}
	std::cout << "Char: " << c[89] << std::endl; 
	c[89] = tmp[89];
	std::cout << "Char: " << c[89] << std::endl; 
	return (0);
}