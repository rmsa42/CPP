/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:23:23 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/04 17:33:09 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default"), floor(new LinkedList())
{
	/* std::cout << "Character Constructor" << std::endl; */
	this->initInv();
	this->head = floor;
}

Character::Character(const std::string &name) : _name(name)
{
	/* std::cout << "Character Name Constructor" << std::endl; */
	this->initInv();
}

Character::Character(const Character &obj)
{
	/* std::cout << "Character copy constructor" << std::endl; */
	this->initInv();
	*this = obj;
}

Character::~Character()
{
	std::cout << "Character Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->inv[i];
}

/* ----------------------------------------------- */

void	Character::initInv()
{
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
}

Character	&Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		for (int i = 0; i < 4; i++)
		{
			if (obj.inv[i] == NULL)
				break;
			this->inv[i] = obj.inv[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i] == NULL)
		{
			this->inv[i] = m;
			break;
		}
	}
	this->floor->spell = m;
	this->floor->next = new LinkedList();
	this->floor = this->floor->next;
}

void	Character::unequip(int idx)
{
	this->floor->spell = this->inv[idx];
	this->floor->next = new LinkedList();
	this->floor = this->floor->next;
	this->inv[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->inv[idx] != NULL)
		this->inv[idx]->use(target);
}
