/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:16:31 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/04 17:22:36 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"

LinkedList::LinkedList() : spell(NULL), next(NULL)
{
	std::cout << "LinkedList Constructor" << std::endl;
}

/* LinkedList::LinkedList(const LinkedList &obj)  : spell(NULL), next(NULL)
{
	std::cout << "LinkedList copy constructor" << std::endl;
	*this = obj;
} */

LinkedList::~LinkedList()
{
	std::cout << "LinkedList Destructor" << std::endl;	
}

/* ----------------------------------------------- */

/* LinkedList	&LinkedList::operator=(const LinkedList &obj)
{
	if (this != &obj)
	{
		
	}
	return (*this);
} */
