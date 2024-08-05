/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:41:28 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/05 15:31:06 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", signGrade, execGrade, "Default")
{
	std::cout << "ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery", signGrade, execGrade, target)
{
	std::cout << "ShrubberyCreationForm Target Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
	*this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor" << std::endl;	
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	(void)obj;
	return (*this);
}

/* ----------------------------------------------- */

void	ShrubberyCreationForm::executer() const
{
	std::string test = this->getTarget() + "_shrubbery";
	const char *fileName = test.c_str();
	std::ofstream outfile(fileName);
	
	outfile << "        _-_       " << std::endl 
			<< "     /~~   ~~\\   " << std::endl
			<< "  /~~         ~~\\" << std::endl
			<< " {               }" << std::endl
			<< " \\  _-     -_  / " << std::endl
			<< "    ~  \\\\ //  ~ " << std::endl
			<< " _- -   | | _- _  " << std::endl
			<< "   _ -  | |   -_  " << std::endl
			<< "       //  \\\\    " << std::endl;
	outfile.close();
}
