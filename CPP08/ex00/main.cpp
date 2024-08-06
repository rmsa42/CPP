/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:14:57 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/06 17:07:00 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vect;

	for (int i = 0; i < 13;i++) {
		vect.push_back(i);
	}
	try {
		easyfind(vect, 14);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}