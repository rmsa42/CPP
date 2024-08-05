/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:14:42 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/05 12:40:44 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

int	main()
{	
	Bureaucrat	bureaucrat("John", 140);
	Form		firstForm("Build", 150, 150);
	Form		secondForm("Work", 130, 130);

	bureaucrat.signAForm(firstForm);
	bureaucrat.signAForm(secondForm);
	
	return (0);
}