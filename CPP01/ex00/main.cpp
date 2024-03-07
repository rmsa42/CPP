/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:07:15 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 08:44:48 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombie1 = newZombie("Zombie1");
	
	zombie1->announce();
	randomChump("Foo");
	delete zombie1;
	return (0);
}