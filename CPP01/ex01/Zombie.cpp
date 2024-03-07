/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:14:54 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 09:51:28 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
	_zombieName = name;
}

Zombie::~Zombie()
{
	std::cout << _zombieName << " destructor" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _zombieName
			  << ": BraiiiiiiinnnzzzZ.."
			  << std::endl;
}

void	Zombie::initName(std::string name)
{
	_zombieName = name;
}
