/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:36:31 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/30 14:54:54 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name_("Default"), sign_(false), signGrade_(150), execGrade_(150), target_("Default")
{
	std::cout << "AForm Constructor" << std::endl;
}

AForm::AForm(const std::string name, const int signGrade, const int execGrade, const std::string target) : name_(name), sign_(false), signGrade_(signGrade),
																		execGrade_(execGrade), target_(target)
{
	if (signGrade > 150 || execGrade > 150)
		throw(GradeTooLowException());
	else if (signGrade < 1 || execGrade < 1)
		throw(GradeTooHighException());
	else
		std::cout << "AForm (All Atributes) Constructor" << std::endl;	
}

AForm::AForm(const AForm &obj) : name_(obj.name_), signGrade_(obj.signGrade_), execGrade_(obj.execGrade_), target_(obj.target_)
{
	std::cout << "AForm copy constructor" << std::endl;
	*this = obj;
}

AForm::~AForm()
{
	std::cout << "AForm Destructor" << std::endl;	
}

AForm	&AForm::operator=(const AForm &obj)
{
	if (this != &obj)
	{
		this->sign_ = obj.sign_;
	}
	return (*this);
}

/* ----------------------------------------------- */

const std::string AForm::getName() const {return (name_);}

const std::string AForm::getTarget() const {return (target_);}

bool AForm::getSign() const {return (sign_);}

int AForm::getSignGrade() const {return (signGrade_);}

int AForm::getExecGrade() const {return (execGrade_);}

/* ------------------------------------------------ */

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("The current Form is not signed");
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() >= this->signGrade_)
		throw (GradeTooLowException());
	this->sign_ = true;
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (this->sign_ == false)
		throw(FormNotSignedException());
	if (executor.getGrade() > this->execGrade_)
		throw(GradeTooLowException());
	this->executer();
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
	out << "Form " << obj.getName()
		<< ", sign " << obj.getSign()
		<< ", signGrade " << obj.getSignGrade()
		<< ", execGrade " << obj.getExecGrade();
	return (out);
}
