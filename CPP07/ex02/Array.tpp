/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:07:46 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/06 12:54:03 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0), arr(NULL)
{
	std::cout << "Array constructor" << std::endl;
	arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), arr(NULL)
{
	std::cout << "Array size constructor" << std::endl;
	arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T> &obj) : arr(NULL)
{
	std::cout << "Array copy connstructor" << std::endl;
	*this = obj;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Array destructor" << std::endl;
	delete [] this->arr;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw (std::range_error("Out of range exception"));
	return (this->arr[index]);
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
{
	if (this != &obj)
	{
		if (this->arr)
			delete [] this->arr;
		this->arr = new T[obj._size];
		this->_size = obj._size;
		for (unsigned int i = 0; i < obj._size; i++) {
			this->arr[i] = obj.arr[i];
		}
	}
	return (*this);
}

#endif