/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:59:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/23 15:39:03by rumachad         ###   ########.fr       */
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

IntVec PmergeMe::jacobsthalSeq(int pendSize)
{
	IntVec seq;
	int curr = 3;
	int n = 3;

	for (int i = 0;i < pendSize;i++) {
		seq.push_back(curr);
		curr = std::pow(2, n) - curr;
		n++;
	}
	return (seq);
}

void PmergeMe::fjmiSort(IntVec& vec)
{
	IntVec bigger;
	IntVec lower;
	IntVec mainChain;

	if (vec.size() <= 1) {return ;}

	for (IntVecIt it = vec.begin();it != vec.end();it+=2) {
		if (*it > *(it + 1)) {
			bigger.push_back(*it);
			lower.push_back(*(it + 1));
		} else {
			bigger.push_back(*(it + 1));
			lower.push_back(*it);
		}
	}
	fjmiSort(bigger);
	for (IntVecIt it = bigger.begin();it != bigger.end();it++) {
		mainChain.push_back(*it);
	}
	mainChain.insert(mainChain.begin(), lower.front());
	lower.erase(lower.begin());
	IntVec seq = jacobsthalSeq(lower.size());
	for (IntVecIt it = seq.begin();it != seq.end();it++) {
		if (*it < (int)mainChain.size()) {
			IntVecIt element = std::lower_bound(mainChain.begin(), mainChain.end(), mainChain[*it]);
			mainChain.insert(element, lower.front());
			lower.erase(lower.begin());
		} else {
			mainChain.insert(mainChain.end(), lower.front());
			lower.erase(lower.begin());
		}
	}
	print(mainChain);
}
