/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:36:29 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/29 13:33:28 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:

	AForm();
	AForm(const std::string name, const int signGrade, const int execGrade, const std::string target);
	AForm(const AForm &obj);
	virtual ~AForm();
	
	AForm				&operator=(const AForm &obj);
	const std::string	getName() const;
	const std::string	getTarget() const;
	bool				getSign() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	void				beSigned(Bureaucrat &bureaucrat);
	void				execute(const Bureaucrat &executor) const;
	virtual void		executer() const = 0;
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
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

private:

	const std::string	name_;
	bool				sign_;
	const int			signGrade_;
	const int			execGrade_;
	const std::string	target_;
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif