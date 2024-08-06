/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:10:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/06 17:07:28 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <iostream>

template <typename T>
void easyfind(T cont, int target)
{
	typename T::iterator i;

	i = std::find(cont.begin(), cont.end(), target);
	if (*i)
		std::cout << "Found " << *i << std::endl;
	else
		throw (std::exception());
}

#endif