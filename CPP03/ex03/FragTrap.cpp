/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:24:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/13 01:22:18 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
	this->_HP = this->_fragAD;
	this->_EP = this->_fragEP;
	this->_AD = this->_fragAD;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap string constructor" << std::endl;
	this->_HP = this->_fragAD;
	this->_EP = this->_fragEP;
	this->_AD = this->_fragAD;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" << std::endl;
}

/* -------------------------------------------------------- */

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	ClapTrap::operator=(obj);
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_HP <= 0 || this->_EP <= 0)
		return ;
	std::cout << "FragTrap " << this->_name
			  << " attacks " << target
			  << ", causing " << this->_AD << " points of damage"
			  << std::endl;
	this->_EP -= 1;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->_name
			  << " requests an high five" << std::endl;
}
