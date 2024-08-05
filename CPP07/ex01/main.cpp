/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:00:57 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/05 19:12:45 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void set(int &nbr)
{
	nbr = 2;	
}

int main()
{
	int arr[4] = {1, 2, 3, 4};
	
	for (int i = 0; i < 4; i++) {
		std::cout << arr[i] << std::endl;	
	}
	iter(arr, 4, &set);

	for (int i = 0; i < 4; i++) {
		std::cout << arr[i] << std::endl;	
	}
	return (0);
}