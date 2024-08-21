/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:59:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/21 18:11:27 by rumachad         ###   ########.fr       */
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
	if (vec.size() <= 1) {
		return ;
	}
	PairVec pairVec = makePairs(vec);
	printPairs(pairVec);
	IntVec largerVec = extractLarger(pairVec);
	print(largerVec);
	std::cout << "Calling recursive" << std::endl;
	std::cout << std::endl;
	fjmiSort(largerVec);
	IntVec pend = makePend(pairVec);
/* 	largerVec.insert(largerVec.begin(), pend.front()); */
	print(largerVec);
}

PairVec PmergeMe::makePairs(IntVec& vec)
{
	PairVec pairVec;

	for (IntVecIt it = vec.begin();it != vec.end();it+=2) {
		IntPair pair;
		if (*it < *(it + 1)) {
			std::swap(*it, *(it + 1));
		}
		pair.first = *it;
		pair.second = *(it + 1);
		pairVec.push_back(pair);
	}
	return (pairVec);
}

IntVec PmergeMe::extractLarger(PairVec& pairVec)
{
	IntVec vec;

	for (PairVecIt it = pairVec.begin();it != pairVec.end();it++) {
		vec.push_back(it->first);
	}
	return (vec);
}

IntVec PmergeMe::makePend(PairVec& pairVec)
{
	IntVec vec;

	for (PairVecIt it = pairVec.begin();it != pairVec.end();it++) {
		vec.push_back(it->second);
	}
	if (straggler) {
		vec.push_back(straggler);
	}
	return (vec);
}
