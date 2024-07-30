/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:14:42 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/30 14:40:46 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstdlib>
#include <ctime>

void	sign_test()
{
	Bureaucrat	bureaucrat("John", 140);
	Form		firstForm("Build", 150, 150);
	Form		secondForm("Work", 130, 130);

	bureaucrat.signAForm(firstForm);
	bureaucrat.signAForm(secondForm);
}

int	main()
{
/* 	srand(std::time(0));
	int grade = rand() % 300;
	
	try
	{
		AForm lol("Build", grade, grade);
		std::cout << lol << std::endl;
	}
	catch (AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	} */
	sign_test();
}