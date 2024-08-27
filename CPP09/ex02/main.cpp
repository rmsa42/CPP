/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:47:04 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/26 15:00:15by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
#include <iomanip>

template <typename T>
void printContainer(const T& cont)
{
	for (typename T::const_iterator it = cont.begin();it != cont.end();it++) {
		std::cout << std::setw(2) << " " << *it;
	}
	std::cout << std::endl;
}

template <typename T>
double sortContainer(T& container)
{
	double sortTime = 0;
	PmergeMe obj;

	std::cout << "Before: ";
	printContainer(container);
	sortTime = clock();
	container = obj.fjmiSort(container);
	sortTime = (clock() - sortTime) / CLOCKS_PER_SEC;
	std::cout << "After: ";
	printContainer(container);
	return (sortTime);
}

template <typename T>
void printTime(const std::string type, T& container, double timer)
{
	std::cout << std::fixed << std::setprecision(6) << "Time to process a range of "
			  << container.size() << " elements with std::" << type << " : "
			  << timer << " us" << std::endl; 
}

int main(int argc, char **argv)
{
	PmergeMe merge;
	IntVec vec;
	IntLst lst;
	double vecTimer;
	double lstTimer;

	if (argc == 1)
		return (0);
	try {
		vec = merge.fillContainer<IntVec>(argv);
		lst = merge.fillContainer<IntLst>(argv);
		vecTimer = sortContainer(vec);
		lstTimer = sortContainer(lst);
		printTime("vector", vec, vecTimer);
		printTime("list", lst, lstTimer);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}