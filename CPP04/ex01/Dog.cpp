/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:05:32 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/27 17:03:24 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain())
{
	std::cout << "Dog default constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete _brain;
}

/* ------------------------------------------------------------- */

Dog	&Dog::operator=(const Dog &obj)
{
	Animal::operator=(obj);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog: bark bark" << std::endl;
}
