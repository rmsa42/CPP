/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:37:19 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/03 16:10:19 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
	std::cout << "AMateria Constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria type Constructor" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	std::cout << "AMateria copy constructor" << std::endl;
	*this = obj;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor" << std::endl;	
}

/* ----------------------------------------------- */

AMateria	&AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "This is " << target.getName() << std::endl;
}
