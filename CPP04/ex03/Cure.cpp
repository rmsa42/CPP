/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:11:38 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/03 15:17:14 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure Constructor" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &obj)
{
	std::cout << "Cure copy constructor" << std::endl;
	this->_type = "cure";
	*this = obj;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor" << std::endl;	
}

/* ----------------------------------------------- */

Cure	&Cure::operator=(const Cure &obj)
{
	AMateria::operator=(obj);
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

/* Finish this Function */
/* void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target
			  << "'s wounds" << " *" << std::endl;
} */