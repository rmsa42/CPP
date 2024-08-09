/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:39:21 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/09 17:13:44 by rumachad         ###   ########.fr       */
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
	else if (line.find_first_not_of("0123456789", delim + 2) != line.npos) {
		throw (BitcoinExchanger::BadInputException());
	}
	pair.first = line.substr(0, delim);
	pair.second = std::atof(line.substr(delim + 1).c_str());
	return (pair);
}

int	parseInput(const std::string& inputFile, BitcoinExchanger& lol)
{
	std::ifstream file(inputFile.c_str());
	std::string line;
	std::pair<std::string, float> pair;

	(void)lol;
	if (!file) {
		std::cerr << "Error: could not open file " << inputFile << std::endl;
		return (1);
	}
	std::getline(file, line);
	while (std::getline(file, line)) {
		try {
			pair = getPair(line);
			float value = lol.getValue(pair.first);
			BitcoinExchanger::validDate(pair.first);
			BitcoinExchanger::validValue(pair.second);
			printValues(pair, value * pair.second);
		} catch (const BitcoinExchanger::BadInputException& e) {
			std::cerr << e.what() << line << std::endl;
		} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	BitcoinExchanger lol;

	if (argc > 1) {
		lol.parseDatabase("data.csv");
		if (parseInput(argv[1], lol) == -1)
			std::cout << "asdad" << std::endl;
	}
	else {
		std::cerr << "Error: could not open file" << std::endl;
	}
	return (0);
}