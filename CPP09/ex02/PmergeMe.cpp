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
/* 	std::cout << "PmergeMe Constructor" << std::endl; */
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
/* 	std::cout << "PmergeMe copy constructor" << std::endl; */
	*this = obj;
}

PmergeMe::~PmergeMe()
{
/* 	std::cout << "PmergeMe Destructor" << std::endl;	 */
}

/* ----------------------------------------------- */

PmergeMe	&PmergeMe::operator=(const PmergeMe &obj)
{
	(void)obj;
	return (*this);
}

IntVec PmergeMe::jacobsthalSeq(int pendSize)
{
	IntVec jacob;
	IntVec seq;
	int curr = 3;
	int n = 3;

	jacob.push_back(1);
	while (jacob.back() < pendSize) {
		jacob.push_back(curr);
		curr = std::pow(2, n) - curr;
		n++;
	}
	seq.push_back(1);
	for (int i = 1;i < (int)jacob.size();i++) {
		for (int j = jacob[i];j > jacob[i - 1];j--) {
			if (j <= pendSize) {
				seq.push_back(j);
			}
		}
	}
	return (seq);
}

IntVec PmergeMe::fjmiSort(IntVec& vec)
{
	IntVec bigger;
	IntVec lower;
	int straggler = false;

	if (vec.size() <= 1) {return vec;}
	if (vec.size() % 2) {
		straggler = vec.back();
		vec.pop_back();
	}

	for (IntVecIt it = vec.begin();it != vec.end();it+=2) {
		if (*it > *(it + 1)) {
			bigger.push_back(*it);
			lower.push_back(*(it + 1));
		} else {
			bigger.push_back(*(it + 1));
			lower.push_back(*it);
		}
	}
	if (straggler) {
		lower.push_back(straggler);
	}
	bigger = fjmiSort(bigger);
	IntVec seq = jacobsthalSeq(lower.size());
	for (IntVecIt it = seq.begin();it != seq.end();it++) {
		IntVecIt element = std::lower_bound(bigger.begin(), bigger.end(), lower.at(*it - 1));
		bigger.insert(element, lower.at(*it - 1));
	}
	return (bigger);
}

IntLst PmergeMe::fjmiSort(IntLst& lst)
{
	IntLst bigger;
	IntLst lower;
	IntLst mainChain;
	int straggler = false;

	if (lst.size() <= 1) {return lst;}
	if (lst.size() % 2) {
		straggler = lst.back();
		lst.pop_back();
	}

	for (IntLstIt it = lst.begin();it != lst.end();++it) {
		IntLstIt curr = it;
		if (*it > *(++it)) {
			bigger.push_back(*curr);
			lower.push_back(*it);
		} else {
			bigger.push_back(*it);
			lower.push_back(*curr);
		}
	}
	if (straggler) {
		lower.push_back(straggler);
	}
	bigger = fjmiSort(bigger);
	mainChain = bigger;
	IntVec seq = jacobsthalSeq(lower.size());
	for (IntVecIt it = seq.begin();it != seq.end();it++) {
		IntLstIt index = lower.begin();
		std::advance(index, (*it - 1));
		IntLstIt element = std::lower_bound(mainChain.begin(), mainChain.end(), *index);
		mainChain.insert(element, *index);
	}
	return (mainChain);
}

const char *PmergeMe::InvalidInputException::what() const throw()
{
	return ("Invalid input exception");
}
