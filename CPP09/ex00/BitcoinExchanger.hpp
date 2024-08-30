/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchanger.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:36:27 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/30 12:33:40 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGER_HPP
#define BITCOINEXCHANGER_HPP

#include <time.h>

#include <cstdlib>
#include <exception>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <utility>

class BitcoinExchanger {
  public:
	BitcoinExchanger();
	BitcoinExchanger(const BitcoinExchanger& obj);
	~BitcoinExchanger();

	BitcoinExchanger& operator=(const BitcoinExchanger& obj);

	std::map<std::string, float>* getMap();
	void parseDatabase(const std::string dbName);
	float getValue(const std::string& key);

	void validDate(const std::string& key) const;
	bool validYear(const unsigned int year) const;
	bool validMonth(const unsigned int month) const;
	bool validDay(const unsigned int day, const unsigned int year, const unsigned int month) const;
	bool isLeapYear(const unsigned int year) const;
	static void validValue(const float& value);

	class LargeNumberException : public std::exception {
	  public:
		virtual const char* what() const throw();
	};
	class NotPositiveNumberException : public std::exception {
	  public:
		virtual const char* what() const throw();
	};
	class BadInputException : public std::exception {
	  public:
		virtual const char* what() const throw();
	};

  private:
	std::map<std::string, float> _db;
};

#endif