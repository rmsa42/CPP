/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:39:21 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/28 12:14:40 rumachad         ###   ########.fr       */
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
	std::string date = line.substr(0, line.find('|'));

	if (date.size() + 1 == line.size()) {
		throw (BitcoinExchanger::BadInputException());
	}
	pair.first = date;
	std::string value = line.substr(line.find('|') + 2);
	if (value.find_first_not_of(' ') == value.npos) {
		throw (BitcoinExchanger::BadInputException());
	}
	size_t err = value.find_first_not_of("0123456789.");
	size_t dot = value.find('.');
	if (err != value.npos || dot != value.find_last_of('.')
		|| !std::isdigit(value[0]) || !std::isdigit(value[value.size() - 1])) {
		if (err == 0 && value[err] == '-') {
			throw (BitcoinExchanger::NotPositiveNumberException());
		}
		throw (BitcoinExchanger::BadInputException());
	}
	pair.second = std::atof(value.c_str());
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