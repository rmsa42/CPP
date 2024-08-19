/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:48:02 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/19 17:29:26 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <exception>
# include <list>
# include <cstdlib>
# include <utility>
# include <algorithm>

typedef std::pair<int, int> IntPair;
typedef std::list<IntPair> IntPairLst;
typedef IntPairLst::const_iterator cIntPairLstItr;
typedef IntPairLst::iterator IntPairLstItr;

class PmergeMe
{
public:

	PmergeMe();
	PmergeMe(const PmergeMe &obj);
	~PmergeMe();
	
	PmergeMe	&operator=(const PmergeMe &obj);
	
	void fillList(char **argv);
	void sortPairs();
/* 	void mergeLst(); */
	void printList(const IntPairLst& lst) const;

private:
	
	IntPairLst _lst;
};

#endif