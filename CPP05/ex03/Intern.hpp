/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:06:30 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/31 11:10:15 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:

	Intern();
	Intern(const Intern &obj);
	~Intern();
	
	Intern	&operator=(const Intern &obj);

	AForm *makeForm(const std::string formName, const std::string target);
	
private:

	AForm *createShrubberyForm(const std::string target);
	AForm *createRobotomyForm(const std::string target);
	AForm *createPresidentialForm(const std::string target);
};

#endif