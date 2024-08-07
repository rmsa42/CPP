/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:53:19 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/07 18:42:41 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int, std::vector<int> > mutStack;

	mutStack.push(190);

	std::cout << mutStack.top() << std::endl;

	mutStack.pop();

	std::cout << mutStack.size() << std::endl;

	return (0);
}