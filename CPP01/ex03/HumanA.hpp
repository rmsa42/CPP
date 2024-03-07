/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:50:11 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 12:38:47 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	
	void	attack();

private:

	Weapon		&_weapon;
	std::string	_name;
};

#endif
