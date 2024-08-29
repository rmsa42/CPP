/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:48:02 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/26 14:14:37umachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <list>
#include <utility>
#include <vector>

/* Vectors for Int */
typedef std::vector<int> IntVec;
typedef IntVec::iterator IntVecIt;

/* List for Int */
typedef std::list<int> IntLst;
typedef IntLst::iterator IntLstIt;

class PmergeMe {
  public:
	PmergeMe();
	PmergeMe(const PmergeMe& obj);
	~PmergeMe();

	PmergeMe& operator=(const PmergeMe& obj);

	template <typename Container> Container fillContainer(char** argv) {
		Container input;

		for (unsigned int i = 1; argv[i]; i++) {
			input.push_back(std::atoi(argv[i]));
			if (input.back() < 0) {
				throw(InvalidInputException());
			}
		}
		return (input);
	}

	IntVec fjmiSort(IntVec& vec);
	IntLst fjmiSort(IntLst& lst);
	IntVec jacobsthalSeq(int penSize);

	class InvalidInputException : public std::exception {
		virtual const char* what() const throw();
	};
};

#endif