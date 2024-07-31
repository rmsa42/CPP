/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:27:40 by rumachad          #+#    #+#             */
/*   Updated: 2024/07/31 17:33:31 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

typedef enum Type {
	CHAR,
	INT,
	DOUBLE,
	FLOAT	
}   t_Type;

class ScalarConverter
{
public:

	static void convert(std::string input);
	~ScalarConverter();
	ScalarConverter	&operator=(const ScalarConverter &obj);

private:

	static void print(char c, int i, double d, float f);
	static t_Type parseInput(std::string input);
	ScalarConverter();
	ScalarConverter(const ScalarConverter &obj);
};

#endif