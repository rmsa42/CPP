/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:52:38 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/13 01:22:46 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:

	ScavTrap();
	ScavTrap(const ScavTrap &obj);
	ScavTrap(std::string name);
	~ScavTrap();
	
	ScavTrap	&operator=(const ScavTrap &obj);

	void	attack(const std::string &target);
	void	guardGate(void);

	static const int	_scavHP = 100;
	static const int	_scavEP = 50;
	static const int	_scavAD = 20;
};

#endif
