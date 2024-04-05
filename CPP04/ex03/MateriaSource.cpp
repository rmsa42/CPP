/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:47:38 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/05 17:52:30 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	/* std::cout << "MateriaSource Constructor" << std::endl; */
	this->initSpace();
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	/* std::cout << "MateriaSource copy constructor" << std::endl; */
	this->initSpace();
	*this = obj;
}

MateriaSource::~MateriaSource()
{
	/* std::cout << "MateriaSource Destructor" << std::endl; */
	//Delete Materias held by the MateriaSource (Calling Materia Destructor)
	for (int i = 0; i < 4; i++)
		delete this->space[i];
}

/* ----------------------------------------------- */

void	MateriaSource::initSpace()
{
	for (int i = 0; i < 4; i++)
		this->space[i] = NULL;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (obj.space[i] == NULL)
				break;
			this->space[i] = obj.space[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* spell)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->space[i] == NULL)
		{
			this->space[i] = spell;
			return ;
		}
	}
	Singleton::getInstance().addSpell(spell);
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	Logger("Unknown Materia type");
	return (0);
}
