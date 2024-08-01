/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:14:42 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/31 12:30:51 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <cstddef>
#include <exception>
#include <iostream>

int main()
{
	Intern intern;
	AForm *ptr;
	Bureaucrat bender("Bender", 1);
	const std::string forms[4] = {
	"shrubbery creation",
	"robotomy request",
	"presidential pardon",
	"random form"};

	for (int i = 0; i < 4; i++) {	
		std::cout << std::endl;
		ptr = intern.makeForm(forms[i], "Bender");
		if (ptr == NULL)
			return (0);
		try {
			ptr->beSigned(bender);
			ptr->execute(bender);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete ptr;
	}
	return (0);
}