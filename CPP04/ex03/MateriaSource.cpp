/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:47:38 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/03 16:05:48 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = obj;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor" << std::endl;	
}

/* ----------------------------------------------- */

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
			this->space[i] = obj.space[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* spell)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->space[i])
			this->space[i] = spell;
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return (new Ice());
	else
		return (new Cure());
	return (0);
}
