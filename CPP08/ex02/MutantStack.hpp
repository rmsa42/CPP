/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:49:43 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/07 18:49:23 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <vector>
# include <iostream>
# include <deque>


template <typename T, typename C>
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

private:
};

#endif