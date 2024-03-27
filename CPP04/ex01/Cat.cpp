/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:27:20 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/27 17:01:55 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete _brain;
}

/* ----------------------------------------- */

Cat	&Cat::operator=(const Cat &obj)
{
	Animal::operator=(obj);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat: meow meow" << std::endl;
}
