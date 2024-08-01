/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:27:32 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/01 17:19:43 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
	size_t dot = input.find_first_not_of("-+0123456789");

	if (input.length() == 1 && std::isalpha(input[0]))
	{
		return (CHAR);
	}
	else if (dot == std::string::npos)
	{
		return (INT);
	}
	else if (std::isdigit(input[dot + 1])
	&& input.find_first_not_of("0123456789", dot + 1) == std::string::npos)
	{
		return (DOUBLE);
	}
	else if ((input[dot] == 'f' || std::isdigit(input[dot + 1]))
	&& input.find_first_not_of("0123456789f", dot + 1) == std::string::npos
	&& input.find('f') == input.find_last_of('f'))
	{
		return (FLOAT);
	}
	return (IMPOSSIBLE);
}

void	ScalarConverter::convert(std::string input)
{
	t_Type type = ScalarConverter::parseInput(input);

	switch (type)
	{	
		case INT:
			ScalarConverter::convertInt(input);
			break;
		case DOUBLE:
			ScalarConverter::convertDouble(input);
			break;
		case FLOAT:
			ScalarConverter::convertFloat(input);
			break;
		case CHAR:
			ScalarConverter::convertChar(input);
			break;
		case IMPOSSIBLE:
			ScalarConverter::handleImpossible(input);
			break;
	}
}

void ScalarConverter::handleImpossible(std::string input)
{
	float f = 0;
	double d = 0;
	if (!input.compare("nan"))
	{
		d = std::strtod(input.c_str(), NULL);
		f = static_cast<float>(d);
		ScalarConverter::printImpossible(f, d);
	}
	else if (!input.compare("+inf") || !input.compare("-inf"))
	{
		d = std::strtod(input.c_str(), NULL);
		f = static_cast<float>(d);
		ScalarConverter::printImpossible(f, d);
	}	
	else if (!input.compare("+inff") || !input.compare("-inff"))
	{
		f = std::strtof(input.c_str(), NULL);
		d = static_cast<double>(f);
		ScalarConverter::printImpossible(f, d);
	}
	else
		throw (ImpossibleConvertException());
}

void	ScalarConverter::convertInt(std::string input)
{
	std::cout << "This is Int" << std::endl;
	int i = std::atoi(input.c_str());
	double d = static_cast<double>(i);
	float f = static_cast<float>(i);
	char c = static_cast<char>(i);
	ScalarConverter::print(c, i, d, f);
}

void	ScalarConverter::convertDouble(std::string input)
{
	std::cout << "This is Double" << std::endl;
	double d = std::strtod(input.c_str(), NULL);
	int i = static_cast<int>(d);
	char c = static_cast<char>(d);
	float f = static_cast<float>(d);
	ScalarConverter::print(c, i, d, f);

}

void	ScalarConverter::convertFloat(std::string input)
{
	std::cout << "This is Float" << std::endl;
	float f = std::strtof(input.c_str(), NULL);
	int i = static_cast<int>(f);
	char c = static_cast<char>(f);
	double d = static_cast<double>(f);
	ScalarConverter::print(c, i, d, f);
}

void	ScalarConverter::convertChar(std::string input)
{
	std::cout << "This is Char" << std::endl;
	char c = input[0];
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);
	ScalarConverter::print(c, i, d, f);
}

void	ScalarConverter::printImpossible(float f, double d)
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::print(char c, int i, double d, float f)
{
	if (std::isprint(c))
		std::cout << "char: " << "'" << c << "'" << std::endl;
	else
	 	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

const char *ScalarConverter::ImpossibleConvertException::what() const throw()
{
	return ("Impossible Conversion Exception");
}