/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:26:16 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/01 14:31:17 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)	{
		try {
			ScalarConverter::convert(argv[1]);		
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}