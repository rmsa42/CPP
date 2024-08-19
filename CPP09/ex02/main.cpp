/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:47:04 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/14 16:12:10 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe merge;

	if (argc == 1)
		return (0);
	try {
		merge.fillList(argv);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}