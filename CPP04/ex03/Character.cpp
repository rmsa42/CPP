/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:23:23 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/03 16:32:03 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default")
{
	std::cout << "Character Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
}

Character::Character(const std::string &name) : _name(name)
{
	std::cout << "Character Name Constructor" << std::endl;
}

Character::Character(const Character &obj)
{
	std::cout << "Character copy constructor" << std::endl;
	*this = obj;
}

Character::~Character()
{
	std::cout << "Character Destructor" << std::endl;
	/* for (int i = 0; i < 4; i++)
		delete this->inv[i]; */
}

/* ----------------------------------------------- */

Character	&Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		for (int i = 0; i < 4; i++)
			this->inv[i] = obj.inv[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	this->inv[0] = m;
}

void	Character::unequip(int idx)
{
	/* AMateria* tmp = this->inv[idx]; */
	this->inv[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	this->inv[idx]->use(target);
}
