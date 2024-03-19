/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:52:21 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/09 01:59:32 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap defualt constructor" << std::endl;
	this->_name = "default";
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap string constructor" << std::endl;
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

/* --------------------------------------------- */

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_HP <= 0 || this->_EP <= 0)
		return ;
	std::cout << "ScavTrap " << this->_name
			  << " attacks " << target
			  << ", causing " << this->_AD << " points of damage"
			  << std::endl;
	this->_EP -= 1;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name
			  << " is in Gate keeper mode" << std::endl;
}
