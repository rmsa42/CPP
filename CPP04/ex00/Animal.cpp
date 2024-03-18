/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:47:08 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/18 17:37:57 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = obj;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

/* --------------------------------------------------------- */

Animal &Animal::operator=(const Animal &obj)
{
	if (this != &obj)
		this->type = obj.getType();
	return (*this);
}

std::string	Animal::getType() const {return (this->type);}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}
