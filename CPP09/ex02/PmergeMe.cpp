/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:59:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/19 17:30:11 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "PmergeMe Constructor" << std::endl;
}

/* PmergeMe::PmergeMe(const PmergeMe &obj)
{
	std::cout << "PmergeMe copy constructor" << std::endl;
} */

PmergeMe::~PmergeMe()
{
	std::cout << "PmergeMe Destructor" << std::endl;	
}

/* ----------------------------------------------- */

/* PmergeMe	&PmergeMe::operator=(const PmergeMe &obj)
{
	
} */

void PmergeMe::fillList(char **argv)
{
	int i = 0;
	while (argv[i++]) {
		IntPair pair;
		pair.first = std::atoi(argv[i++]);
		if (argv[i]) {
			pair.second = std::atoi(argv[i]);
		}
		if (pair.first < 0 || pair.second < 0)
			throw (std::exception());
		this->_lst.push_back(pair);
	}
	printList(this->_lst);
}

void PmergeMe::printList(const IntPairLst& lst) const
{
	std::cout << "Lst: ";
	for (cIntPairLstItr it = lst.begin();it != lst.end();it++) {
		std::cout << "(" << it->first << ", " << it->second << ")";
	}
	std::cout << std::endl;
}
