/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:14:42 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/05 14:08:32 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void presidentialTest()
{
	AForm *presidential = new PresidentialPardonForm("Me");
	Bureaucrat john("John", 30);

	try
	{
		presidential->beSigned(john);
		presidential->execute(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete presidential;	
}

void robotomyTest()
{
	AForm *robotomy = new RobotomyRequestForm("House");
	Bureaucrat john("John", 30);

	try
	{
		robotomy->beSigned(john);
		robotomy->execute(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete robotomy;	
}

void	shrubberyTest()
{
	AForm *shrubbery = new ShrubberyCreationForm("Home");
	Bureaucrat john("John", 30);

	try
	{
		shrubbery->beSigned(john);
		shrubbery->execute(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	delete shrubbery;
}

void bureaucratExecutor()
{
	Bureaucrat john("John", 1);
	AForm *shrubbery = new ShrubberyCreationForm("Home");
	AForm *robotomy = new RobotomyRequestForm("Home");
	AForm *presidential = new PresidentialPardonForm("Home");

	std::cout << std::endl;
	try
	{
		shrubbery->beSigned(john);
		robotomy->beSigned(john);
		presidential->beSigned(john);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	john.executeForm(*shrubbery);
	john.executeForm(*robotomy);
	john.executeForm(*presidential);
	
	delete shrubbery;
	delete robotomy;
	delete presidential;
}

int	main()
{
	shrubberyTest();
	std::cout << std::endl;
	robotomyTest();
	std::cout << std::endl;
	presidentialTest();
	std::cout << std::endl;
	bureaucratExecutor();
	return (0);
}