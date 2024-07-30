/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:36:29 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/30 14:38:45 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:

	Form();
	Form(const std::string name, const int signGrade, const int execGrade);
	Form(const Form &obj);
	~Form();
	
	Form				&operator=(const Form &obj);
	const std::string	getName() const;
	bool				getSign() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	void				beSigned(Bureaucrat &bureaucrat);
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

private:
	
	const std::string	name_;
	bool				sign_;
	const int			signGrade_;
	const int			execGrade_;
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif