/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:42:55 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 12:30:18 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() {}

Weapon::Weapon(std::string weapon) : type(weapon) {}

Weapon::~Weapon() {}

const std::string	&Weapon::getType()
{
	const std::string &ref = type;
	return (ref);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}
