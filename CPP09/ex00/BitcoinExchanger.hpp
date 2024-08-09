/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchanger.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:36:27 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/09 16:35:44 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGER_HPP
# define BITCOINEXCHANGER_HPP

# include <map>
# include <string>
# include <iostream>
# include <fstream>
# include <utility>
# include <cstdlib>
# include <exception>
# include <time.h>

class BitcoinExchanger
{
public:

	BitcoinExchanger();
	BitcoinExchanger(const BitcoinExchanger &obj);
	~BitcoinExchanger();
	
	BitcoinExchanger	&operator=(const BitcoinExchanger &obj);

	std::map<std::string, float>* getMap();
	void parseDatabase(const std::string dbName);
	float getValue(const std::string& key);

	static void validDate(const std::string& key);
	static void validValue(const float& value);
	
	class LargeNumberException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class NotPositiveNumberException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class BadInputException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

private:
	
	std::map<std::string, float> _db;
};

#endif