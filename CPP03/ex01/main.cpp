/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:43:25 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/09 14:45:02 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap Clap("ClapTrap");
	ScavTrap Scav("ScavTrap");
	
	std::cout << "\033[32m\nScavTrap class Test\033[0m" << std::endl;
	Scav.attack(Clap.getName());
	Scav.printStatus();
	
	Scav.takeDamage(900);
	Scav.printStatus();
	
	Scav.beRepaired(12);
	Scav.printStatus();

	Scav.guardGate();

	std::cout << "\033[32mOperator = Test\033[0m" << std::endl;
	ScavTrap ScavCopy;
	
	ScavCopy = Scav;
	Scav.printStatus();
	ScavCopy.printStatus();

	return (0);
}