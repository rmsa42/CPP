/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:09:47 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 09:48:46 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
public:

	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce(void);
	void	initName(std::string name);
	
private:
		
	std::string	_zombieName;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
