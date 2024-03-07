/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:25:52 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/13 03:53:29 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	phonebook;
	std::string		input;
	
	std::cout << "Welcome to PhoneBook" << std::endl;
	std::cout << "Available Commands: ADD, SEARCH, EXIT" << std::endl;
	while (input.compare("EXIT") != 0)
	{
		std::cin >> input;
		if (input.compare("ADD") == 0)
		 	phonebook.add();
		else if (input.compare("SEARCH") == 0)
			phonebook.search();
	}
	/* std::cout << CLEAR; */
	return (0);
}
