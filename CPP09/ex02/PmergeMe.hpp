/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:48:02 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/21 18:00:28 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <exception>
# include <cstdlib>
# include <utility>
# include <algorithm>
# include <vector>

/* Vectors for Int */
typedef std::vector<int> IntVec;
typedef IntVec::iterator IntVecIt;

/* Vectors for Pairs */
typedef std::pair<int, int> IntPair;
typedef std::vector<IntPair> PairVec;
typedef PairVec::iterator PairVecIt;

class PmergeMe
{
public:

	PmergeMe();
	PmergeMe(const PmergeMe &obj);
	~PmergeMe();
	
	PmergeMe	&operator=(const PmergeMe &obj);
	
	void fillVec(char **argv);
	void fjmiSort(IntVec& vec);
	PairVec makePairs(IntVec& vec);
	IntVec extractLarger(PairVec& pairVec);
	IntVec makePend(PairVec& pairVec);
	void print(IntVec& vec);
	void printPairs(PairVec& vec);

private:

	int straggler;
};

#endif