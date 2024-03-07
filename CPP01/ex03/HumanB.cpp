/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:09:26 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 12:47:51 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {_weapon = NULL;}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (_weapon == NULL)
	{
		std::cout << _name
				  << " has no Weapon" << std::endl;
		return ;
	}
	std::cout << _name
			  << " attacks with their "
			  << _weapon->getType() << std::endl;
}
