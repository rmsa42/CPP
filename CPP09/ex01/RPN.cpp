/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:16:47 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/13 09:17:41 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &obj)
{
	std::cout << "RPN copy constructor" << std::endl;
	*this = obj;
}

RPN::~RPN()
{
}

/* ----------------------------------------------- */

RPN	&RPN::operator=(const RPN &obj)
{
	if (this != &obj)
	{
		this->_expr = obj._expr; 
	}
	return (*this);
}

Operands RPN::makePair()
{
	Operands pair;

	if (this->_expr.size() < 2)
		throw (ErrorExprException());
	pair.first = this->_expr.top();
	this->_expr.pop();
	pair.second = this->_expr.top();
	this->_expr.pop();
	return (pair);
}

void RPN::calculate(const std::string& input)
{
	Operands pair;

	for (std::string::const_iterator it = input.begin(); it != input.end();it++) {
		switch (*it) {
			case ' ':
				continue;
				break;
			case '+':
				pair = makePair();
				this->_expr.push(pair.second + pair.first);	
				break;
			case '-':
				pair = makePair();
				this->_expr.push(pair.second - pair.first);
				break;
			case '*':
				pair = makePair();
				this->_expr.push(pair.second * pair.first);
				break;
			case '/':
				pair = makePair();
				if (pair.first == 0)
					throw (InfinityException());
				this->_expr.push(pair.second / pair.first);
				break;
			default:
				if (!std::isdigit(*it))
					throw (ErrorExprException());
				this->_expr.push(*it - '0');
		}
	}
}

void RPN::printStack()
{
	while (!this->_expr.empty()) {
		std::cout << this->_expr.top() << std::endl;
		this->_expr.pop();
	}
}

const char *RPN::ErrorExprException::what() const throw()
{
	return ("Error");
}

const char *RPN::InfinityException::what() const throw()
{
	return ("inf");
}