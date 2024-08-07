/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:10:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/07 09:57:32 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

class NotFoundException : public std::exception
{
public:
	virtual const char *what() const throw () {return ("Number not Found");};
};

template <typename T>
void easyfind(T cont, int target)
{
	typename T::const_iterator i;

	i = std::find(cont.begin(), cont.end(), target);
	if (i == cont.end())
		throw (NotFoundException());
	std::cout << "Found Number " << *i << std::endl;
}

#endif