/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:07:48 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/04 15:31:06 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	getlvl(char *input)
{
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;
	
	for (i = 0; i < 4; i++)
		if (lvls[i] == input)
			break;
	return (i);
}

int	main(int argc, char *argv[])
{
	Harl	harl;
	int		level = 0;

	if (argc == 2)
	{
		level = getlvl(argv[1]);
		switch (level)
		{
			case 0:
				harl.complain("DEBUG");
				std::cout << std::endl;
			case 1:
				harl.complain("INFO");
				std::cout << std::endl;
			case 2:
				harl.complain("WARNING");
				std::cout << std::endl;
			case 3:
				harl.complain("ERROR");
				std::cout << std::endl;
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
	}
	else
	{
		std::cout << "Invalid input" << std::endl;
		return (1);
	}
	return (0);
}
