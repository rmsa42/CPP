/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:55:03 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/16 11:53:41 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	/* std::cout << "Ice Constructor" << std::endl; */
	this->_type = "ice";
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	/* std::cout << "Ice copy constructor" << std::endl; */
	this->_type = "ice";
	*this = obj;
}

Ice::~Ice()
{
	/* std::cout << "Ice Destructor" << std::endl;	 */
}

/* ----------------------------------------------- */

Ice	&Ice::operator=(const Ice &obj)
{
	(void)obj;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "
			  << target.getName() << " *" << std::endl;
}
