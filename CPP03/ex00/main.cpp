/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:43:25 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/09 14:31:46 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iomanip>

int main()
{
	ClapTrap Clap1("FR4G-TP");
	ClapTrap Clap2("H010-TP");

	std::cout << "\033[32mClapTrap class Test\033[0m" << std::endl;
	Clap1.attack(Clap2.getName());
	Clap1.printStatus();
	
	Clap1.takeDamage(9);
	Clap1.printStatus();
	
	Clap1.beRepaired(12);
	Clap1.printStatus();
	
	Clap2.attack(Clap1.getName());
	Clap2.printStatus();

	std::cout << "\033[32mOperator = Test\033[0m" << std::endl;
	Clap1.printStatus();
	Clap1 = Clap2;
	Clap1.printStatus();
	
	return (0);
}
