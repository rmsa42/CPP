/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:51:23 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/05 17:56:13 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

//-----------Problems------------
//Equip the same Materia twice, deletes it twice (seg fault)
//Character and MaterialSource copies overload
//-------------------------------
int main()
{
	AMateria* tmp;
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	MateriaSource* t = new MateriaSource(*src);
	
	ICharacter* me = new Character("Bob");

	ICharacter* clone = new Character("clone");
	/* Character* me = new Character("Bob"); */

	for (int i = 0; i < 4; i++)
	{
		tmp = src->createMateria("ice");
		me->equip(tmp);
	}
	
	me->use(0, *clone);
	me->use(1, *clone);
	me->unequip(10);
	me->unequip(0);
	
	delete me;
	delete t;
	delete clone;
	delete src;

	return (0);
}