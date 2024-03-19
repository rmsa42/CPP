/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:48:15 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/09 02:01:05 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _HP(10), _EP(10), _AD(0)
{
	std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(10), _EP(10), _AD(0)
{
	std::cout << "String constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Copy constructor" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	if (this != &obj)
	{
		this->_name = obj.getName();
		this->_HP = obj.getHp();
		this->_EP = obj.getEp();
		this->_AD = obj.getAd();	
	}
	return (*this);
}

/* ------------------------------------------------ */

std::string	ClapTrap::getName() const {return (_name);}

int	ClapTrap::getHp() const {return (_HP);}

int	ClapTrap::getEp() const {return (_EP);}

int	ClapTrap::getAd() const {return (_AD);}

/* ----------------------------------------------- */

void	ClapTrap::attack(const std::string &target)
{
	if (this->_HP <= 0 || this->_EP <= 0)
		return ;
	std::cout << "ClapTrap " << this->_name
			  << " attacks " << target
			  << ", causing " << this->_AD << " points of damage"
			  << std::endl;
	this->_EP -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HP <= 0 || this->_EP <= 0)
		return ;
	std::cout << "ClapTrap " << this->_name
			  << " takes " << amount << " points of damage"
			  << std::endl;
	this->_HP -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HP <= 0 || this->_EP <= 0)
		return ;
	std::cout << "ClapTrap " << this->_name
			  << " repairs " << amount << " points of damage"
			  << std::endl;
	this->_HP += amount;
	this->_EP -= 1;
}
