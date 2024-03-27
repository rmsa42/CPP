/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:14:19 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/27 17:45:46 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "Leaks Test" << std::endl;
	
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	delete dog;
	delete cat;
	
	std::cout << "Deep Copies Test" << std::endl;

	
	
	std::cout << "Constructors and Destructors Test" << std::endl;
	
	const Animal* animals[6];
	
	for (size_t i = 0; i < 3; i++)
		animals[i] = new Dog();
	for (size_t i = 3; i < 6; i++)
		animals[i] = new Cat();
	std::cout << "\n";
	for (size_t i = 0; i < 10; i++)
		delete animals[i];

	return (0);
}
