/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:40:12 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 16:56:09 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice Constructor" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &obj)
{
	std::cout << "Ice copy constructor" << std::endl;
	*this = obj;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor" << std::endl;	
}

/* ----------------------------------------------- */

Ice	&Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		AMateria::operator=(obj);
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}