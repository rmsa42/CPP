/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:27:32 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/31 17:33:00 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <string>

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Constructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	std::cout << "ScalarConverter copy constructor" << std::endl;
	*this = obj;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor" << std::endl;	
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void)obj;
	return (*this);
}

/* ----------------------------------------------- */

t_Type	ScalarConverter::parseInput(std::string input)
{	
	if (input.length() == 1 && std::isalpha(input[0]))
	{
		return (CHAR);
	}
	else if (input.find_first_of('.') != std::string::npos
	&& input.find_first_of('f') == std::string::npos)
	{
		return (DOUBLE);
	}
	else if (input.find_first_of('f') != std::string::npos)
	{
		return (FLOAT);
	}
	else
	{
		return (INT);
	}
}

void	ScalarConverter::print(char c, int i, double d, float f)
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::convert(std::string input)
{
	t_Type type = ScalarConverter::parseInput(input);

	if (type == INT)
	{
		int i = std::atoi(input.c_str());
		double d = static_cast<double>(i);
		float f = static_cast<float>(i);
		char c = static_cast<char>(i);
		ScalarConverter::print(c, i, d, f);
	}
}