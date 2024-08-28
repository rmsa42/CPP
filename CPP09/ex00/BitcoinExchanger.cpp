/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchanger.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:40:59 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/28 12:24:38 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchanger.hpp"

BitcoinExchanger::BitcoinExchanger()
{
}

BitcoinExchanger::BitcoinExchanger(const BitcoinExchanger &obj)
{
	*this = obj;
}

BitcoinExchanger::~BitcoinExchanger()
{
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
	if (it != this->_db.end()) {
		return (it->second);
	}
	std::map<std::string, float>::iterator itlow = this->_db.lower_bound(key);
	if (itlow != this->_db.begin()) {
		itlow--;
		return (itlow->second);
	}
	return (0);
}

void BitcoinExchanger::validDate(const std::string& key)
{
	struct tm time;

	if (strptime(key.c_str(), "%Y-%m-%d", &time) == NULL) {
		throw (BadInputException());
	}
}

void BitcoinExchanger::validValue(const float& value)
{
	if (value > 1000) {
		throw (LargeNumberException());
	}
}

const char *BitcoinExchanger::LargeNumberException::what() const throw()
{
	return ("Error: too large a number.");
}

const char *BitcoinExchanger::NotPositiveNumberException::what() const throw()
{
	return ("Error: not a positive number.");
}

const char *BitcoinExchanger::BadInputException::what() const throw()
{
	return ("Error: bad input => ");
}