/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:40:33 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/06 12:38:59 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
public:

	Array();
	Array(unsigned int n);
	Array(const Array &obj);
	~Array();

	Array &operator=(const Array &obj);
	unsigned int size() const;
	T &operator[](unsigned int index);

private:

	unsigned int _size;
	T *arr;
};

# include "Array.tpp"

#endif