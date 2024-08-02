/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:38:41 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/02 17:26:07 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void anotherTest()
{
	Data *ptr = new Data(14);
	uintptr_t serial;

	std::cout << "Data ptr: " << ptr << " Nbr: " << ptr->_nbr << std::endl;
	serial = Serializer::serialize(ptr);
	std::cout << "uintptr_t: " << serial << std::endl;
	serial = 19;
	std::cout << Serializer::deserialize(serial) << std::endl;

	delete ptr;
}

int main()
{
	Data *ptr = new Data(10);
	Data *deserial = NULL;
	uintptr_t	serial;
	
	std::cout << "Data ptr: " << ptr << " Nbr: " << ptr->_nbr << std::endl;
	serial = Serializer::serialize(ptr);
	std::cout << "uintptr_t: " << serial << std::endl;
	deserial = Serializer::deserialize(serial);
	std::cout << "Data ptr: " << deserial << " Nbr: " << deserial->_nbr << std::endl;

	delete deserial;

	anotherTest();
	return (0);
}