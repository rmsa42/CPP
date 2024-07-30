/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:02:45 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/30 10:07:45 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CPP
# define PRESIDENTIALPARDONFORM_CPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:

	PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	~PresidentialPardonForm();
	
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &obj);
	
	void executer() const;

	static int const signGrade = 25;
	static int const execGrade = 5;

};

#endif