/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:07:48 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/15 16:11:04 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	printWelcome()
{
	std::cout << "\033c";
	std::cout << "Welcome to Harl 2.0" << std::endl;
	std::cout << "Available Commands: DEBUG, INFO, WARNING, ERROR" << std::endl;
}

int	main(void)
{
	Harl		harl;
	std::string	input;

	printWelcome();
	std::cout << "Command: ";
	while (std::cin >> input)
	{
		harl.complain(input);
		std::cin.ignore();
		std::cout << "Command: ";
	}
	return (0);
}
