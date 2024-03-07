/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:14:54 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 09:51:06 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << _zombieName
			  << ": BraiiiiiiinnnzzzZ.."
			  << std::endl;
}

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
	_zombieName = name;
}

Zombie::~Zombie()
{
	std::cout << _zombieName << " Destructor" << std::endl;
}
