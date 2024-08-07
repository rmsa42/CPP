/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:08:52 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/07 14:40:55 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0)
{
	std::cout << "Span Constructor" << std::endl;
}

Span::Span(unsigned int n) : _size(n)
{
	std::cout << "Span Size constructor" << std::endl;
}

Span::Span(const Span &obj)
{
	std::cout << "Span copy constructor" << std::endl;
	*this = obj;
}

Span::~Span()
{
	std::cout << "Span Destructor" << std::endl;	
}

/* ----------------------------------------------- */

Span	&Span::operator=(const Span &obj)
{
	if (this != &obj) {
		this->_size = obj._size;
		this->_vec = obj._vec;
	}
	return (*this);
}

void Span::addNumber(const int nbr)
{
	if (this->_vec.size() >= this->_size)
		throw (std::out_of_range("Out of range exception"));
	this->_vec.push_back(nbr);
	std::cout << "Added number" << std::endl;
}

std::vector<int>* Span::getVector()
{
	return (&this->_vec);
}

int Span::longestSpan()
{
	if (this->_vec.size() <= 1)
		throw (NotEnoughNumbersException());
	return (*std::max_element(this->_vec.begin(), this->_vec.end())
			- *std::min_element(this->_vec.begin(), this->_vec.end()));
}

int Span::shortestSpan()
{
	if (this->_vec.size() <= 1)
		throw (NotEnoughNumbersException());
	int bestDiff = *std::max_element(this->_vec.begin(), this->_vec.end());
	std::sort(this->_vec.begin(), this->_vec.end());
	for (std::vector<int>::iterator it = this->_vec.begin();it != this->_vec.end() - 1;it++) {	
		int currentDiff = std::abs(*it - *(it + 1));
		if (currentDiff < bestDiff) {
			bestDiff = currentDiff;
		}
	}
	return (std::abs(bestDiff));
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return ("Not enough numbers exception");
}