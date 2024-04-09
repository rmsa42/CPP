/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:49:59 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/09 15:10:57 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor" << std::endl;
	this->_name = "default";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_HP = FragTrap::_fragHP;
	this->_EP = ScavTrap::_scavEP;
	this->_AD = FragTrap::_fragAD;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name)
													, FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap string constructor" << std::endl;
	this->_HP = FragTrap::_fragHP;
	this->_EP = ScavTrap::_scavEP;
	this->_AD = FragTrap::_fragAD;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	std::cout << "DiamondTrap copy constructor" << std::endl;
	this->_name = obj.getName();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

/* -------------------------------------------------------------------------------- */

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this != &obj)
		this->_name = obj.getName();
	ClapTrap::operator=(obj);
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name
			  << ", ClapTrap name: " << this->ClapTrap::_name << std::endl;
}

std::string	DiamondTrap::getName() const {return (this->_name);}
