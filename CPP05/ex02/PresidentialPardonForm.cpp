/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:04:36 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/30 10:08:45 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", signGrade, execGrade, "Default") 
{
	std::cout << "PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential", signGrade, execGrade, target)
{
	std::cout << "PresidentialPardonForm Target constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj)
{
	std::cout << "PresidentialPardonForm copy constructor" << std::endl;
	*this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor" << std::endl;	
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	(void)obj;
	return (*this);
}

/* ----------------------------------------------- */

void	PresidentialPardonForm::executer() const
{
	std::cout << this->getTarget()
			  << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}