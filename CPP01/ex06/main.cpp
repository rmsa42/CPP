/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:07:48 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/15 22:40:04 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//Faxer loop return int
int	getlvl(char *input)
{
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;
	
	for (i = 0; i < 4; i++)
		if (lvls[i] == input)
			break;
	return (i);
}

int	error_arg(int level)
{
	if (level > 3)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	Harl	harl;
	int		level = 0;

	if (argc == 2)
	{
		level = getlvl(argv[1]);
		if (error_arg(level))
			return (0);
		while (level < 4)
		{
			switch (level)
			{
				case 0:
					harl.complain("DEBUG");
					break;
				case 1:
					harl.complain("INFO");
					break;
				case 2:
					harl.complain("WARNING");
					break;
				case 3:
					harl.complain("ERROR");
					break;
			}
			std::cout << std::endl;
			level++;
		}
	}
	else
	{
		std::cout << "Invalid input" << std::endl;
		return (1);
	}
	return (0);
}
