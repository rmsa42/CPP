/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:46:23 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/02 17:08:31 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _nbr(0)
{
	std::cout << "Data Constructor" << std::endl;
}

Data::Data(int nbr) : _nbr(nbr)
{
	std::cout << "Data Nbr constructor" << std::endl;
}

Data::Data(const Data &obj)
{
	std::cout << "Data copy constructor" << std::endl;
	*this = obj;
}

Data::~Data()
{
	std::cout << "Data Destructor" << std::endl;	
}

/* ----------------------------------------------- */

Data	&Data::operator=(const Data &obj)
{
	if (this != &obj)
		this->_nbr = obj._nbr;
	return (*this);
}
