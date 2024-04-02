/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:14:19 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/02 12:43:12 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	deepCopieTest()
{
	std::cout << "Deep Copies Test" << std::endl;
	std::cout << std::endl;

	Cat* cat = new Cat();
	Cat* copy = new Cat(*cat);
	/* Dog* dog = new Dog();
	Dog* copy = new Dog(*dog); */

	std::cout << cat->getBrain() << std::endl;
	/* std::cout << dog->getBrain() << std::endl; */
	std::cout << copy->getBrain() << std::endl;

	delete cat;
	/* delete dog; */
	delete copy;
}

void	destructorsTest()
{
	const Animal* animals[6];
	
	std::cout << "Constructors and Destructors Test" << std::endl;
	std::cout << std::endl;
	
	for (size_t i = 0; i < 3; i++)
		animals[i] = new Dog();
	for (size_t i = 3; i < 6; i++)
		animals[i] = new Cat();
	std::cout << "\n";
	for (size_t i = 0; i < 6; i++)
		delete animals[i];
}

int main()
{
	/* deepCopieTest();
	std::cout << std::endl;
	destructorsTest(); */

	return (0);
}
