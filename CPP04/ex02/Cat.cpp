/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:27:20 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 13:56:34 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->_brain = new Brain();
	*this = obj;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete _brain;
}

/* ----------------------------------------- */

Cat	&Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		*this->_brain = *obj._brain;
	}
	return (*this);
}

Brain*	Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::makeSound() const
{
	std::cout << "Cat: meow meow" << std::endl;
}
