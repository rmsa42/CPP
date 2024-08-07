/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:08:57 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/07 14:41:06 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
public:

	Span();
	Span(unsigned int n);
	Span(const Span &obj);
	~Span();
	
	Span	&operator=(const Span &obj);

	void addNumber(const int nbr);
	std::vector<int>* getVector();
	int longestSpan();
	int shortestSpan();
	class NotEnoughNumbersException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

private:
	
	std::vector<int> _vec;
	unsigned int _size;
};

#endif