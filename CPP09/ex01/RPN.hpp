/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:16:06 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/12 16:50:11 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RNP_HPP
# define RNP_HPP

# include <iostream>
# include <stack>
# include <utility>
# include <string>
# include <exception>

typedef std::pair<int, int> Operands;

class RPN
{
public:

	RPN();
	RPN(const RPN &obj);
	~RPN();
	
	
	RPN	&operator=(const RPN &obj);

	void calculate(const std::string& input);
	Operands makePair();
	
	class ErrorExprException : public std::exception
	{
		public:
			const char *what() const throw ();
	};
	
	void printStack();

private:

	std::stack<int> _expr;
};

# endif