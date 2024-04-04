/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:50:39 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/03 12:04:04 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	check_out(std::string &buffer, const std::string &str1, const std::string &str2)
{
	size_t	pos = 0;
	size_t	str1_len = str1.length();
	
	while ((pos = buffer.find(str1, pos)) != std::string::npos)
	{
		std::cout << buffer << std::endl;
		buffer = buffer.substr(0, pos) + str2 + buffer.substr(pos + str1_len);
		pos += str2.length();
	}
}

int	check_file(std::ifstream &file)
{
	if (!file)
	{
		std::cout << "File doesn't exist" << std::endl;
		return (1);
	}
	return (0);
}

int	check_file(std::ofstream &file)
{
	if (!file)
	{
		std::cout << "Error open/create File" << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc > 3)
	{
		std::string			newFileName = argv[1];
		const std::string	str1 = argv[2];
		const std::string	str2 = argv[3];
		std::string			buffer;
		newFileName.append(".replace");
	
		std::ifstream		file(argv[1]);
		if (check_file(file))
			return (0);
		std::ofstream		newFile(newFileName.c_str());
		if (check_file(newFile))
			return (0);
		while (std::getline(file, buffer))
		{
			check_out(buffer, str1, str2);
			newFile << buffer << std::endl;
		}
		file.close();
		newFile.close();
	}
	else
		std::cout << "Not enough arguments" << std::endl;
	return (0);
}
