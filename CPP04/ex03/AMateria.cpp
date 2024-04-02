/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:21:45 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 16:57:41 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateria (Default)")
{
	std::cout << "AMateria Constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria String Constructor" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor" << std::endl;
}

/* ----------------------------------------------- */

AMateria	&AMateria::operator=(const AMateria &obj)
{
	this->_type = obj._type;
	return (*this);
}