/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:47:38 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/16 12:07:13 by rumachad         ###   ########.fr       */
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
	this->clearSpace();
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
		this->clearSpace();
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
	/* Logger("Using learnMateria"); */
	for (int i = 0; i < 4; i++)
	{
		if (this->space[i] == NULL)
		{
			this->space[i] = spell;
			spell->setFlag(true);
			return ;
		}
	}
	Singleton::getInstance().addSpell(spell);
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	/* Logger("Creating new Materia"); */
	for (int i = 0; i < 4 && this->space[i]; i++)
	{
		if (type == this->space[i]->getType())
			return (this->space[i]->clone());
	}
	Logger("Unknown Materia type");
	return (0);
}

void	MateriaSource::clearSpace()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->space[i])
			delete this->space[i];
	}
}
