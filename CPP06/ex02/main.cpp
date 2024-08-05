/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:37:31 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/05 11:06:36 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <exception>
#include <cstdlib>

Base *generate(void)
{
	int	randomNbr = 0;
	Base *ptr = NULL;
	
	srand(std::time(0));
	randomNbr = rand() % 3;

	if (randomNbr == 0)
		ptr = new A();
	else if (randomNbr == 1)
		ptr = new B();
	else
		ptr = new C();
	return (ptr);
}

void identify(Base *p)
{
	A *ptrA = dynamic_cast<A *>(p);
	if (ptrA != NULL)
	{
		std::cout << "It's A type" << std::endl;
		return;
	}
	B *ptrB = dynamic_cast<B *>(p);
	if (ptrB != NULL)
	{
		std::cout << "It's B type" << std::endl;
		return;
	}
	C *ptrC = dynamic_cast<C *>(p);
	if (ptrC != NULL)
	{
		std::cout << "It's C type" << std::endl;
		return;
	}
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "It's A type" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "It's B type" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "It's C type" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	Base *ptr = NULL;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;	
	return (0);
}