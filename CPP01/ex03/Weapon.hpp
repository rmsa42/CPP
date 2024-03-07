/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:37:46 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 12:28:16 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{
public:

	Weapon();
	Weapon(std::string weapon);
	~Weapon();
	
	const std::string	&getType();
	void				setType(std::string newType);

private:

	std::string	type;
};

#endif
