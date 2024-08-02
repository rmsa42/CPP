/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:38:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/02 16:57:33 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer Constructor" << std::endl;
}

Serializer::Serializer(const Serializer &obj)
{
	std::cout << "Serializer copy constructor" << std::endl;
	*this = obj;
}

Serializer::~Serializer()
{
	std::cout << "Serializer Destructor" << std::endl;	
}

/* ----------------------------------------------- */

Serializer	&Serializer::operator=(const Serializer &obj)
{
	(void)obj;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}