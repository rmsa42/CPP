/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:43:25 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/09 15:10:03 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	FragTrap Frag("FragTrap");
	DiamondTrap Diamond("DiamondTrap");
	
	std::cout << "\033[32m\nFragTrap class Test\033[0m" << std::endl;
	Diamond.attack(Frag.getName());
	Diamond.printStatus();
	
	Diamond.takeDamage(9);
	Diamond.printStatus();
	
	Diamond.beRepaired(12);
	Diamond.printStatus();

	Diamond.whoAmI();

	std::cout << "\033[32m\nOperator = Test\033[0m" << std::endl;
	DiamondTrap DiamondCopy;
	
	DiamondCopy = Diamond;
	Diamond.printStatus();
	DiamondCopy.printStatus();

	return (0);
}