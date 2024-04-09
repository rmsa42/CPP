/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:43:25 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/09 15:06:43 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap Scav("ScavTrap");
	FragTrap Frag("FragTrap");
	
	std::cout << "\033[32m\nFragTrap class Test\033[0m" << std::endl;
	Frag.attack(Scav.getName());
	Frag.printStatus();
	
	Frag.takeDamage(9);
	Frag.printStatus();
	
	Frag.beRepaired(12);
	Frag.printStatus();

	Frag.highFiveGuys();

	std::cout << "\033[32mOperator = Test\033[0m" << std::endl;
	FragTrap FragCopy;
	
	FragCopy = Frag;
	Frag.printStatus();
	FragCopy.printStatus();

	return (0);
}
