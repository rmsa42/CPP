/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:55:49 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 12:38:43 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) {}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << _name
			  << " attacks with their "
			  << _weapon.getType() << std::endl;
}
