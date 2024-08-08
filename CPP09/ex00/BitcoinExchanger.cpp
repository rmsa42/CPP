/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchanger.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:40:59 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/08 14:40:54 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchanger.hpp"

BitcoinExchanger::BitcoinExchanger()
{
	std::cout << "BitcoinExchanger Constructor" << std::endl;
}

BitcoinExchanger::BitcoinExchanger(const BitcoinExchanger &obj)
{
	std::cout << "BitcoinExchanger copy constructor" << std::endl;
	*this = obj;
}

BitcoinExchanger::~BitcoinExchanger()
{
	std::cout << "BitcoinExchanger Destructor" << std::endl;	
}

/* ----------------------------------------------- */

BitcoinExchanger	&BitcoinExchanger::operator=(const BitcoinExchanger &obj)
{
	if (this != &obj) {
		this->_db = std::map<std::string, int>(obj._db);
	}
	return (*this);
}

std::map<std::string, int>* BitcoinExchanger::getMap()
{
	return (&this->_db);
}

void BitcoinExchanger::parseDatabase(const std::string dbName)
{
	std::ifstream file(dbName);
	std::string	line;
	std::pair<std::string, int> dbPair;

	std::getline(file, line);
	while (std::getline(file, line)) {
		std::string first = line.substr(0, line.find(','));
		std::string second = line.substr(line.find(',') + 1);
		dbPair.first = first;
		dbPair.second = std::atoi(second.c_str());
		this->_db.insert(dbPair);
	}
	file.close();
}