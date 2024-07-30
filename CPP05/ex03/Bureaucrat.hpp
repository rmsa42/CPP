/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:03:05 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/30 15:11:03 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
public:

	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	~Bureaucrat();
	
	Bureaucrat	&operator=(const Bureaucrat &obj);

	int				getGrade() const;
	const std::string getName() const;
	void			IncrementGrade();
	void			DecrementGrade();
	void			signForm(AForm &AForm);
	void			executeForm(AForm const &form);
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};

private:
	
	const std::string name_;
	int			grade_;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj);

#endif