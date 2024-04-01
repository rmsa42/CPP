/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:09:45 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 17:17:07 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default")
{
	std::cout << "Character Constructor" << std::endl;
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
