/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:39:21 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/27 17:43:33 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchanger.hpp"

void printValues(std::pair<std::string, float>& pair, float value)
{
	std::cout << pair.first << " => " << pair.second << " = " << value << std::endl;
}

std::pair<std::string, float> getPair(const std::string& line)
{
	std::pair<std::string, float> pair;
	size_t delim = line.find('|');

	if (delim == line.npos) {
		throw (BitcoinExchanger::BadInputException());
	}
	delim = line.find_first_not_of(' ', delim + 1);	
	if (delim == line.npos) {
		throw (BitcoinExchanger::BadInputException());
	}
	pair.first = line.substr(0, delim);
	pair.second = std::atof(line.substr(delim).c_str());
	return (pair);
}

void parseInput(const std::string& inputFile, BitcoinExchanger& lol)
{
	std::ifstream file(inputFile.c_str());
	std::string line;
	std::pair<std::string, float> pair;

	if (!file) {
		throw (std::exception());
	}
	std::getline(file, line);
	while (std::getline(file, line)) {
		try {
			pair = getPair(line);
			BitcoinExchanger::validDate(pair.first);
			BitcoinExchanger::validValue(pair.second);
			printValues(pair, lol.getValue(pair.first) * pair.second);
		} catch (const BitcoinExchanger::BadInputException& e) {
			std::cerr << e.what() << line << std::endl;
		} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	file.close();
}

int main(int argc, char **argv)
{
	BitcoinExchanger lol;

	if (argc > 1) {
		try {
			lol.parseDatabase("data.csv");
			parseInput(argv[1], lol);
		} catch (const BitcoinExchanger::BadInputException& e) {
			std::cerr << e.what() << std::endl;
		} catch (const std::exception& e) {
			std::cerr << "Error: could not open file" << std::endl;
		}
	}
	else {
		std::cerr << "Error: could not open file" << std::endl;
	}
	return (0);
}