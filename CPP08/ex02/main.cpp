/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:53:19 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/08 11:12:29 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mutStack;

	mutStack.push(190);

	std::cout << "Number at the top: " << mutStack.top() << std::endl;

	mutStack.pop();

	std::cout << "Stack size: " << mutStack.size() << std::endl;

	for (int i = 0;i < 15;i++) {
		mutStack.push(i);
	}
	
	std::cout << "Stack size: " << mutStack.size() << std::endl;

	MutantStack<int>::iterator it = mutStack.begin();
	MutantStack<int>::iterator ite = mutStack.end();
	MutantStack<int>::const_iterator cit = mutStack.begin();
	std::cout << "cit: " << *cit << std::endl;
	cit = ite - 2;
	std::cout << "cit: " << *cit << std::endl;
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "Number at the top: " << mutStack.top() << std::endl;
	std::stack<int> s(mutStack);
	return (0);
}