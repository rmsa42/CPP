/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:49:43 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/08 11:01:32 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <deque>


template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
public:

	MutantStack() {std::cout << "Mutant constructor" << std::endl;};
	~MutantStack() {std::cout << "Mutant destructor" << std::endl;};
	MutantStack(const MutantStack &obj) {
		if (this != &obj) {
			this->stack = obj.stack;
		}
		return (*this);
	}

	typedef typename C::iterator iterator;
	typedef typename C::const_iterator const_iterator;
	typedef typename C::reverse_iterator reverse_iterator;
	typedef typename C::const_reverse_iterator const_reverse_iterator;

	iterator begin() {
		return (this->c.begin());
	}
	iterator end() {
		return (this->c.end());
	}
	const_iterator cbegin() const {
		return (this->c.cbgein());
	}
	const_iterator cend() const {
		return (this->c.cend());
	}
	reverse_iterator rbegin() {
		return (this->c.rbegin());
	}
	reverse_iterator rend() {
		return (this->c.end());
	}
	const_reverse_iterator crbegin() const {
		return (this->c.crbegin());
	}
	const_reverse_iterator crend() const {
		return (this->c.crend());
	}
};

#endif