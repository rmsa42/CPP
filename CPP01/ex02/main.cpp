/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:31:02 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 11:33:03 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory Address: " << &string << std::endl;
	std::cout << "Held PTR: " << stringPTR << std::endl;
	std::cout << "Held Reference: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String: " << string << std::endl;
	std::cout << "Value PTR: " << *stringPTR << std::endl;
	std::cout << "Value Reference: " << stringREF << std::endl;
}
