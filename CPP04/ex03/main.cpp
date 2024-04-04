/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:51:23 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/04 16:56:19 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

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

	tmp = src->createMateria("ice");
	me->equip(tmp);//0
	tmp = src->createMateria("ice");
	me->equip(tmp);//1
	tmp = src->createMateria("cure");
	me->equip(tmp);//2
	tmp = src->createMateria("ice");
	me->equip(tmp);//3
	tmp = src->createMateria("ice");
	me->equip(tmp);//4

	me->use(0, *clone);
	me->use(1, *clone);
	
	delete me;
	delete t;
	delete clone;
	delete src;

	return (0);
}