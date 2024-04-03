/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:51:23 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/03 16:31:33 by rumachad         ###   ########.fr       */
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
	AMateria* tmp = new Ice();
	
	ICharacter* me = new Character("Bob");

	ICharacter* clone = new Character("Clone");

	me->equip(tmp);
	me->use(0, *clone);
	
	delete tmp;
	delete me;
	delete clone;
	return (0);
}