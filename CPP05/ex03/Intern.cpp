/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:08:04 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/31 12:16:01 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstddef>
#include <string>

Intern::Intern()
{
	std::cout << "Intern Constructor" << std::endl;
}

Intern::Intern(const Intern &obj)
{
	std::cout << "Intern copy constructor" << std::endl;
	*this = obj;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor" << std::endl;	
}

Intern	&Intern::operator=(const Intern &obj)
{
	(void)obj;
	return (*this);
}

/* ----------------------------------------------- */

AForm *Intern::makeForm(const std::string formName, const std::string target)
{
	const std::string forms[3] = {
	"shrubbery creation",
	"robotomy request",
	"presidential pardon"};
	AForm *(Intern::*functions[3])(const std::string) = {
	&Intern::createShrubberyForm,
	&Intern::createRobotomyForm,
	&Intern::createPresidentialForm};
	AForm *form;

	for (int i = 0; i < 3; i++) {
		if (forms[i] == formName) {
			form = (this->*functions[i])(target);
			std::cout << "Intern creates " << *form << std::endl;
			return (form);
		}
	}
	std::cerr << "No Form with that name" << std::endl;
	return (NULL);
}

AForm *Intern::createShrubberyForm(const std::string target) {
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::createRobotomyForm(const std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm *Intern::createPresidentialForm(const std::string target) {
	return (new PresidentialPardonForm(target));
}