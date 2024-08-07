/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:14:57 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/07 11:07:10 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> vect;
	std::list<int> lst;

	lst.assign(10, 15);
	try {
		easyfind(lst, 11);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	for (int i = 1; i < 13;i++) {
		vect.push_back(i);
	}
	try {
		easyfind(vect, 12);
		vect.assign(10, 15);	
		easyfind(vect, 15);
		easyfind(vect, 10);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}