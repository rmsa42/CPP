/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchanger.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:40:59 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/08 17:12:14 by rumachad         ###   ########.fr       */
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
		this->_db = std::map<std::string, float>(obj._db);
	}
	return (*this);
}

std::map<std::string, float>* BitcoinExchanger::getMap()
{
	return (&this->_db);
}

void BitcoinExchanger::parseDatabase(const std::string dbName)
{
	std::ifstream file(dbName.c_str());
	std::string	line;
	std::pair<std::string, float> dbPair;

	std::getline(file, line);
	while (std::getline(file, line)) {
		std::string first = line.substr(0, line.find(','));
		std::string second = line.substr(line.find(',') + 1);
		dbPair.first = first;
		dbPair.second = std::atof(second.c_str());
		this->_db.insert(dbPair);
	}
	file.close();
}

float BitcoinExchanger::getValue(const std::string& key)
{
	std::map<std::string, float>::iterator it = this->_db.find(key);
	std::map<std::string, float>::iterator itlow = this->_db.lower_bound(key);
	itlow--;
	if (it == this->_db.end())
		return (itlow->second);
	return (it->second);
}