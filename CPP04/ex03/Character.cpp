/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:09:45 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 21:36:46 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default")
{
	std::cout << "Character Constructor" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(const std::string name) : _name(name)
{
	std::cout << "Character Name constructor" << std::endl;
}

Character::Character(const Character &obj)
{
	std::cout << "Character copy constructor" << std::endl;
	*this = obj;
}

Character::~Character()
{
	std::cout << "Character Destructor" << std::endl;	
}

/* ----------------------------------------------- */

Character	&Character::operator=(const Character &obj)
{
	if (this != &obj)
		this->_name = obj.getName();
	return (*this);
}

std::string const &Character::getName() const {return (this->_name);}

void	Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] == nullptr)
		{
			this->inventory[i] = m;
			break ;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}

void	Character::unequip(int idx)
{
	delete this->inventory[idx];
	/* No delete the materia */
}
