/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:14:19 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/16 10:11:13 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << std::endl;
	std::cout << GREEN "Animal class test\n" RESET << std::endl;
	std::cout << "Animal type: " << dog->getType() << " " << std::endl;
	std::cout << "Animal type: " << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	animal->makeSound();

	std::cout << std::endl;
	delete dog;
	delete cat;
	delete animal;
	
	std::cout << std::endl;
	std::cout << RED "-----------------------------" RESET << std::endl;
	std::cout << std::endl;

	const	WrongAnimal* wrongAnimal = new WrongAnimal();
	const	WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << std::endl;
	std::cout << GREEN "WrongAnimal class test\n" RESET << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound(); // will output the wrong cat sound
	wrongAnimal->makeSound();

	std::cout << std::endl;
	delete wrongCat;
	delete wrongAnimal;
	
	return (0);
}
