/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:06:27 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 12:39:44 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Weapon.hpp"

class	HumanB
{
public:

	HumanB(std::string name);
	~HumanB();
	
	void	attack();
	void	setWeapon(Weapon &weapon);

private:

	Weapon		*_weapon;
	std::string	_name;
};

#endif
