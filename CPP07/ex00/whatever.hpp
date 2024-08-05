/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:44:36 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/05 17:32:48 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP


template <typename T>
void swap(T &v1, T &v2)
{
	T tmp;

	tmp = v1;
	v1 = v2;
	v2 = tmp;	
}

template<typename T>
T min(T &v1, T &v2)
{
	return ((v1 < v2) ? v1 : v2);
}

template<typename T>
T max(T &v1, T &v2)
{
	return ((v1 > v2) ? v1 : v2);
}

#endif