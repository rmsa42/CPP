/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:39:21 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/08 15:31:09 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchanger.hpp"

void printValues(const std::pair<std::string, int> pair, const int value)
{
	std::cout << pair.first << " => " << pair.second << " = " << pair.second * value << std::endl;
}

int	parseInput(const std::string inputFile, const std::map<std::string, int> db)
{
	std::ifstream file(inputFile.c_str());
	std::string line;
	std::pair<std::string, int> pair;

	std::getline(file, line);
	while (std::getline(file, line)) {
		std::string first = line.substr(0, line.find(' '));	
		std::string second = line.substr(line.find('|') + 1);
		pair.first = first;
		pair.second = std::atoi(second.c_str());	
		printValues(pair, db.at(pair.first));
	}
	return (0);
}

int main(int argc, char **argv)
{
	BitcoinExchanger lol;
	std::map<std::string, int> *ptr = lol.getMap();

	if (argc > 1) {
		lol.parseDatabase("data.csv");
		parseInput(argv[1], *ptr);	
	}
/* 	for (std::map<std::string, int>::iterator it = inputDb.begin();it != inputDb.end();++it) {
		std::cout << it->first << " => " << it->second << std::endl;
	} */
	return (0);
}