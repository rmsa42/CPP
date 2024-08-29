/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:16:06 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/27 16:21:07 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RNP_HPP
#define RNP_HPP

#include <exception>
#include <iostream>
#include <limits>
#include <stack>
#include <string>
#include <utility>

typedef std::pair<int, int> Operands;

class RPN {
  public:
	RPN();
	RPN(const RPN& obj);
	~RPN();

	RPN& operator=(const RPN& obj);

	void calculate(const std::string& input);
	Operands makePair();

	class OverflowException : public std::exception {
		virtual const char* what() const throw();
	};
	class ErrorExprException : public std::exception {
	  public:
		virtual const char* what() const throw();
	};
	class InfinityException : public std::exception {
	  public:
		virtual const char* what() const throw();
	};

	void printStack();

  private:
	std::stack<int> _expr;
};

#endif