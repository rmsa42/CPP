/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:36:31 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/05 12:24:10 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name_("Default"), sign_(false), signGrade_(150), execGrade_(150)
{
	std::cout << "Form Constructor" << std::endl;
}

Form::Form(const std::string name, const int signGrade, const int execGrade) : name_(name), sign_(false), signGrade_(signGrade), execGrade_(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw(GradeTooLowException());
	else if (signGrade < 1 || execGrade < 1)
		throw(GradeTooHighException());
	else
		std::cout << "Form (All Atributes) Constructor" << std::endl;	
}

Form::Form(const Form &obj) : name_(obj.name_), signGrade_(obj.signGrade_), execGrade_(obj.execGrade_)
{
	std::cout << "Form copy constructor" << std::endl;
	*this = obj;
}

Form::~Form()
{
	std::cout << "Form Destructor" << std::endl;	
}

Form	&Form::operator=(const Form &obj)
{
	if (this != &obj)
	{
		this->sign_ = obj.sign_;
	}
	return (*this);
}

/* ----------------------------------------------- */

const std::string Form::getName() const {return (name_);}

bool Form::getSign() const {return (sign_);}

int Form::getSignGrade() const {return (signGrade_);}

int Form::getExecGrade() const {return (execGrade_);}

/* ------------------------------------------------ */

const char *Form::GradeTooHighException::what() const throw()
{
	return ("A Form grade cannot be higher than 1");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("A Form grade cannot be lower than 150");
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() >= this->signGrade_)
		throw (GradeTooLowException());
	this->sign_ = true;
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
	out << "Form " << obj.getName()
		<< ", sign " << obj.getSign()
		<< ", signGrade " << obj.getSignGrade()
		<< ", execGrade " << obj.getExecGrade();
	return (out);
}