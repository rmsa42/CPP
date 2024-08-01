/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:27:40 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/01 17:18:52 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <exception>
# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <cctype>

typedef enum Type {
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	IMPOSSIBLE,
}   t_Type;

class ScalarConverter
{
public:

	static void convert(std::string input);

private:

	static void convertInt(std::string input);
	static void convertDouble(std::string input);
	static void convertFloat(std::string input);
	static void convertChar(std::string input);
	static void handleImpossible(std::string input);
	static void print(char c, int i, double d, float f);
	static void printImpossible(float f, double d);
	static t_Type parseInput(std::string input);
	ScalarConverter();
	ScalarConverter(const ScalarConverter &obj);
	~ScalarConverter();
	ScalarConverter	&operator=(const ScalarConverter &obj);
	class ImpossibleConvertException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif