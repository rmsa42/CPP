/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:39:21 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/08 17:27:23 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchanger.hpp"

int printError(const std::string& err)
{
	std::cerr << "Error: " << err << std::endl;
	return (-1);
}
void printValues(std::pair<std::string, float>& pair, float& value)
{
	std::cout << pair.first << " => " << pair.second << " = " << value * pair.second << std::endl;
}

int checkPair(std::pair<std::string, float>& pair)
{
	if (pair.second < 0) {
		return (printError("not a positive number."));
	}
	return (0);
}

int	parseInput(const std::string& inputFile, BitcoinExchanger& lol)
{
	std::ifstream file(inputFile.c_str());
	std::string line;
	std::pair<std::string, float> pair;

	std::getline(file, line);
	while (std::getline(file, line)) {
		std::string first = line.substr(0, line.find(' '));	
		std::string second = line.substr(line.find('|') + 1);
		pair.first = first;
		pair.second = std::atof(second.c_str());
		float value = lol.getValue(pair.first);
		printValues(pair, value);
	}
	return (0);
}

int main(int argc, char **argv)
{
	BitcoinExchanger lol;

	if (argc > 1) {
		lol.parseDatabase("data.csv");
		parseInput(argv[1], lol);
	}
/* 	for (std::map<std::string, int>::iterator it = inputDb.begin();it != inputDb.end();++it) {
		std::cout << it->first << " => " << it->second << std::endl;
	} */
	return (0);
}