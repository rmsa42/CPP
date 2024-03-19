/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:22:50 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/13 01:21:42 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap &obj);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &obj);
	
	void	attack(const std::string &target);
	void	highFiveGuys(void);

	static const int	_fragHP = 100;
	static const int	_fragEP = 100;
	static const int	_fragAD = 30;
};

#endif