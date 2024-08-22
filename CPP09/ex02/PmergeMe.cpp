/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:59:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/22 17:31:32 by rumachad         ###   ########.fr       */
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

void PmergeMe::printPairs(PairVec& vec)
{
	std::cout << "Pairs: ";
	for (PairVecIt it = vec.begin();it != vec.end();it++) {
		std::cout << "(" << it->first << ", " << it->second << ")";
	}
	std::cout << std::endl;
}

void PmergeMe::print(IntVec& vec)
{
	std::cout << "Vec: ";
	for (IntVecIt it = vec.begin();it != vec.end();it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::fillVec(char **argv)
{
	IntVec input;

	for (unsigned int i = 1;argv[i];i++) {
		input.push_back(std::atoi(argv[i]));
		if (input.back() < 0)
			throw (std::exception());
	}	
	if (input.size() % 2 != 0) {
		straggler = input.back();
		input.pop_back();
	} else {
		straggler = false;
	}
	fjmiSort(input);
}

void PmergeMe::fjmiSort(IntVec& vec)
{
	IntVec first;
	IntVec second;

	if (vec.size() % 2 != 0) {
		straggler = vec.back();
		vec.pop_back();
	}
	if (vec.size() < 2) {
		return ;
	}
	if (vec.size() == 2) {
		if (vec[0] > vec[1]) {
			std::swap(vec[0], vec[1]);
		}
		return ;
	}
	PairVec pairVec = makePairs(vec);
	printPairs(pairVec);
	for (PairVecIt it = pairVec.begin();it != pairVec.end();it++) {
		if (it->first < it->second) {
			std::swap(it->first, it->second);
		}
		first.push_back(it->first);
		second.push_back(it->second);
	}
	fjmiSort(first);
	print(first);
}

PairVec PmergeMe::makePairs(IntVec& vec)
{
	PairVec pairVec;

	for (IntVecIt it = vec.begin();it != vec.end();it+=2) {
		IntPair pair;
		pair.first = *it;
		pair.second = *(it + 1);
		pairVec.push_back(pair);
	}
	return (pairVec);
}
