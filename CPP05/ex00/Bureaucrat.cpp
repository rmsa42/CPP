/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:26:35 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/05 12:16:55 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name_("Default"), grade_(150)
{
	std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name)
{
	std::cout << "Bureaucrat " << name << " Constructor" << std::endl;
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name_(obj.name_)
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
	if (this->grade_ == 1)
		throw (GradeTooHighException());
	this->grade_--;
}

void	Bureaucrat::DecrementGrade()
{
	if (this->grade_ == 150)
		throw (GradeTooLowException());
	this->grade_++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("A Bureaucrat Grade cannot be Higher than 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("A Bureaucrat Grade cannot be Lower than 150");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}