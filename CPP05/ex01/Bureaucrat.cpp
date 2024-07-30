/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:26:35 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/30 14:58:27 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name_("Default"), grade_(150)
{
	std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
	{
		this->grade_ = grade;
		std::cout << "Bureaucrat " << name << " Constructor" << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor" << std::endl;	
}

/* ----------------------------------------------- */

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		this->grade_ = obj.grade_;
	}
	return (*this);
}

const std::string Bureaucrat::getName() const {return (this->name_);}

int	Bureaucrat::getGrade() const {return (this->grade_);}

void	Bureaucrat::IncrementGrade()
{
	this->grade_--;
	if (this->grade_ < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::DecrementGrade()
{
	this->grade_++;
	if (this->grade_ > 150)
		throw (Bureaucrat::GradeTooLowException());
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("A Bureaucrat Grade cannot be Higher than 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("A Bureaucrat Grade cannot be Lower than 150");
}

void Bureaucrat::signAForm(Form &Form)
{
	try
	{
		Form.beSigned(*this);
		std::cout << *this << " signed " << Form << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << *this << " couldn't sign "
				  << Form << " beacause bureaucrat grade is lower" << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}