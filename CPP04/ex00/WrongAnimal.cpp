/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:47:08 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/18 17:37:57 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

/* --------------------------------------------------------- */

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
		this->type = obj.getType();
	return (*this);
}

std::string	WrongAnimal::getType() const {return (this->type);}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: WrongAnimal sound" << std::endl;
}
