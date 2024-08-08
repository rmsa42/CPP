/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchanger.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:36:27 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/08 15:01:35 by rumachad         ###   ########.fr       */
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
# include <algorithm>

class BitcoinExchanger
{
public:

	BitcoinExchanger();
	BitcoinExchanger(const BitcoinExchanger &obj);
	~BitcoinExchanger();
	
	BitcoinExchanger	&operator=(const BitcoinExchanger &obj);

	std::map<std::string, int>* getMap();
	void parseDatabase(const std::string dbName);

private:
	
	std::map<std::string, int> _db;
};

#endif