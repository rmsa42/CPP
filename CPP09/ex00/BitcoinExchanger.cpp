/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchanger.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:40:59 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/30 16:47:11 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchanger.hpp"

BitcoinExchanger::BitcoinExchanger() {}

BitcoinExchanger::BitcoinExchanger(const BitcoinExchanger& obj) { *this = obj; }

BitcoinExchanger::~BitcoinExchanger() {}

/* ----------------------------------------------- */

BitcoinExchanger& BitcoinExchanger::operator=(const BitcoinExchanger& obj) {
	if (this != &obj) {
		this->_db = std::map<std::string, float>(obj._db);
	}
	return (*this);
}

std::map<std::string, float>* BitcoinExchanger::getMap() {
	return (&this->_db);
}

void BitcoinExchanger::parseDatabase(const std::string dbName) {
	std::ifstream file(dbName.c_str());
	std::string line;
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

float BitcoinExchanger::getValue(const std::string& key) {
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

bool BitcoinExchanger::validYear(const unsigned int year) const {
	if (year >= 1000 && year <= 9999) {
		return (true);
	}
	return (false);
}

bool BitcoinExchanger::validMonth(const unsigned int month) const {
	if (month > 0 && month < 13) {
		return (true);
	}
	return (false);
}

bool BitcoinExchanger::validDay(const unsigned int day, const unsigned int year,
								const unsigned int month) const {
	unsigned int nbrDays[13] = {0,	31, 28, 31, 30, 31, 30,
								31, 31, 30, 31, 30, 31};
	if (isLeapYear(year)) {
		nbrDays[2] += 1;
	}
	if (day > 0 && day <= nbrDays[month]) {
		return (true);
	}
	return (false);
}

bool BitcoinExchanger::isLeapYear(const unsigned int year) const {
	if (year % 400 == 0) {
		return (true);
	}
	if (year % 4 == 0 && year % 100 != 0) {
		return (true);
	}
	return (false);
}

void BitcoinExchanger::validDate(const std::string& key) const {
	size_t delim = key.find('-');
	size_t delim2 = key.find_last_of('-');

	if (delim == key.npos || delim == delim2) {
		throw(BitcoinExchanger::BadInputException());
	}
	const std::string year = key.substr(0, delim);
	std::cout << "Year: " << year << std::endl;
	if (year.size() != 4 || year.find_first_not_of("0123456789") != year.npos
		|| !validYear(std::atoi(year.c_str()))) {
		throw(BitcoinExchanger::BadInputException());
	}
	const std::string month = key.substr(delim + 1, delim2 - delim - 1);
	std::cout << "Month: " << month << std::endl;
	if (month.size() != 2 || month.find_first_not_of("0123456789") != month.npos
		|| !validMonth(std::atoi(month.c_str()))) {
		throw(BitcoinExchanger::BadInputException());
	}
	const std::string day = key.substr(delim2 + 1, key.size() - delim2 - 2);
	std::cout << "Day: " << day << std::endl;
	if (day.size() != 2 || day.find_first_not_of("0123456789") != day.npos
		|| !validDay(std::atoi(day.c_str()), std::atoi(year.c_str()),
					 std::atoi(month.c_str()))) {
		throw(BitcoinExchanger::BadInputException());
	}
}

void BitcoinExchanger::validValue(const float& value) {
	if (value > 1000) {
		throw(LargeNumberException());
	}
}

const char* BitcoinExchanger::LargeNumberException::what() const throw() {
	return ("Error: too large a number.");
}

const char* BitcoinExchanger::NotPositiveNumberException::what() const throw() {
	return ("Error: not a positive number.");
}

const char* BitcoinExchanger::BadInputException::what() const throw() {
	return ("Error: bad input => ");
}