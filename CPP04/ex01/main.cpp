/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:14:19 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/16 10:23:15 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	deepCopieTest()
{

	Cat* cat = new Cat();
	Cat* copy = new Cat(*cat);
	/* Dog* dog = new Dog();
	Dog* copy = new Dog(*dog); */
	
	std::cout << std::endl;
	std::cout << GREEN "Deep Copies Test" RESET << std::endl;
	std::cout << std::endl;

	std::cout << "Cat Brain: " << cat->getBrain() << std::endl;
	/* std::cout << dog->getBrain() << std::endl; */
	std::cout << "Copy Cat Brain: " << copy->getBrain() << std::endl;

	std::cout << std::endl;
	delete cat;
	/* delete dog; */
	delete copy;
}

void	destructorsTest()
{
	const Animal* animals[4];
	
	std::cout << GREEN "Constructors and Destructors Test" RESET << std::endl;
	std::cout << std::endl;
	
	for (size_t i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (size_t i = 2; i < 4; i++)
		animals[i] = new Cat();
	std::cout << std::endl;
	for (size_t i = 0; i < 4; i++)
		delete animals[i];
}

int main()
{
	deepCopieTest();
	std::cout << std::endl;
	destructorsTest();

	return (0);
}
