/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:14:19 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/27 15:57:52 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
/* 	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();

	delete dog;
	delete cat;
	delete meta;
	
	return 0; */

	const	WrongAnimal* meta = new WrongAnimal();
	const	WrongAnimal* cat = new WrongCat();
	
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); // will output the wrong cat sound
	meta->makeSound();

	delete cat;
	delete meta;
	
	return (0);
}
