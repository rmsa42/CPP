/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:23:23 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/05 17:50:08 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default")
{
	/* std::cout << "Character Constructor" << std::endl; */
	this->initInv();
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
	/* std::cout << "Character Destructor" << std::endl; */
	//Delete Materias held by the Character (Calling Materia Destructor)
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i])
			delete this->inv[i];
	}
}

/* ----------------------------------------------- */

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
	if (m == 0)
		return ;
	Logger("Using equip function");
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i] == NULL)
		{
			this->inv[i] = m;
			return ;
		}
	}
	Singleton::getInstance().addSpell(m);
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		Logger("Wrong Index");
		return ;
	}
	if (this->inv[idx] == NULL)
	{
		Logger("No Materia in this index");
		return ;
	}
	Logger("Using unequip function");
	Singleton::getInstance().addSpell(this->inv[idx]);
	this->inv[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		Logger("Wrong Index");
		return ;
	}
	if (this->inv[idx] != NULL)
		this->inv[idx]->use(target);
}

void	Character::initInv()
{
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
}
