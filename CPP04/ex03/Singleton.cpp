/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Singleton.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:50:54 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/16 11:50:51 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Singleton.hpp"

Singleton::Singleton()
{
	/* std::cout << "Singleton Constructor" << std::endl; */
}

Singleton::Singleton(const Singleton &obj)
{
	(void)obj;
}

Singleton::~Singleton()
{
	/* std::cout << "Singleton Destructor" << std::endl; */
	
	SpellList* tmp;
	
	while (list != NULL)
	{
		tmp = list;
		list = list->next;
		delete tmp->spell;
		delete tmp;	
	}
}

/* ----------------------------------------------- */

Singleton	&Singleton::operator=(const Singleton &obj)
{
	(void)obj;
	return (*this);
}

Singleton& Singleton::getInstance()
{
	static	Singleton instance;
	
	return (instance);
}

void	Singleton::addSpell(AMateria* s)
{
	SpellList* node = new SpellList;
	
	node->spell = s;
	node->next = list;
	list = node;
}