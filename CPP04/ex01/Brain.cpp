/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:17:22 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/27 17:32:51 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "Big Brain Ideas";
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = obj;
}

Brain::~Brain()
{
	delete[] this->ideas;
	std::cout << "Brain Destructor" << std::endl;	
}

/* ----------------------------------------------- */

Brain	&Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}
