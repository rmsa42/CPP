/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:43:25 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/13 01:29:39 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	/* ClapTrap clap("clap");
	ScavTrap scav("scav");
	FragTrap frag("frag"); */
	DiamondTrap a("foo");
	DiamondTrap diamond(a);
	
	std::cout << diamond.getName() << std::endl;
	std::cout << diamond.getHp() << std::endl;
	std::cout << diamond.getEp() << std::endl;
	std::cout << diamond.getAd() << std::endl;
	diamond.attack("ClapTrap bot");
	diamond.whoAmI();
	
	/* clap.attack("scav");
	scav.attack("clap");
	frag.attack("clap and scav"); */

	return (0);
}