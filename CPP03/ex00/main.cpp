/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:43:25 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/08 14:45:22 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("palc");
	ClapTrap b;

	a.attack("part");
	a.takeDamage(9);
	a.beRepaired(12);

	b = a;
	b.attack("trap");
	std::cout << "b Hp: " << b.getHp() << std::endl;
	
	return (0);
}