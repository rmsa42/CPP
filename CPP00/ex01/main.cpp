/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:25:52 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/02 12:09:18 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printMenu()
{
	std::cout << "Welcome to PhoneBook" << std::endl;
	std::cout << "Available Commands: ADD, SEARCH, EXIT" << std::endl;
}

int	main(void)
{
	PhoneBook 	phonebook;
	std::string		input;
	
	while (input.compare("EXIT") != 0)
	{
		printMenu();
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		 	phonebook.add();
		else if (input.compare("SEARCH") == 0)
			phonebook.search();
		std::cout << CLEAR;
	}
	return (0);
}
