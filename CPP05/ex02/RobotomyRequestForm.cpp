/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:30:11 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/30 10:07:19 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", signGrade, execGrade, "Default")
{
	std::cout << "RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy", signGrade, execGrade, target) 
{
	std::cout << "RobotomyRequestForm Target Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{
	std::cout << "RobotomyRequestForm copy constructor" << std::endl;
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor" << std::endl;	
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	(void)obj;
	return (*this);
}

/* ----------------------------------------------- */

void	RobotomyRequestForm::executer() const
{
	srand(std::time(0));
	int value = rand() % 2;
	
	if (value == 1)
	{
		std::cout << "Drilling Noises. " << this->getTarget()
				  << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << "Robotomy failed" << std::endl;
}