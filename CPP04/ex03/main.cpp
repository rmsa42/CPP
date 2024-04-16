/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:51:23 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/16 12:09:59 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	deepCopyTest()
{
	Character*	me = new Character("me");
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	Character* copyCharacter = new Character(*me);
	
	delete me;
	delete copyCharacter;

	MateriaSource* copyMateriaSource = new MateriaSource(*src);

	delete src;
	delete copyMateriaSource;
}

void	normal_test()
{
	std::cout << GREEN "Normal Test\n" RESET << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	std::cout << RED "\n------------------" RESET << std::endl;
}

void	my_test()
{
	std::cout << GREEN "My Test\n" RESET << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	AMateria*	tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	src->learnMateria(new Cure());
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	for (int i = 0; i < 8; i++)
		me->equip(tmp->clone());
	
	for (int i = 0; i < 5; i++)
		me->use(i, *bob);
	
	for (int i = 0; i < 8; i++)
		src->learnMateria(new Ice());

	delete bob;
	delete me;
	delete src;
}

int main()
{
	normal_test();
	std::cout << std::endl;
	deepCopyTest();
	my_test();

	return 0;
}