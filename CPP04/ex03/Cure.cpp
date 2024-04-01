/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 20:42:22 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 20:44:59 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure Constructor" << std::endl;
	this->_type = "Cure";
}

Cure::Cure(const Cure &obj)
{
	std::cout << "Cure copy constructor" << std::endl;
	*this = obj;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor" << std::endl;	
}

/* ----------------------------------------------- */

Cure	&Cure::operator=(const Cure &obj)
{
	if (this != &obj)
		AMateria::operator=(obj);
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()
			  << "'s wounds *" << std::endl;
}