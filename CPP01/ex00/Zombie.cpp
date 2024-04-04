/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:14:54 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/03 11:05:37 by rumachad         ###   ########.fr       */
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
	std::cout << _zombieName << " Destructor" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _zombieName
			  << ": BraiiiiiiinnnzzzZ.."
			  << std::endl;
}
