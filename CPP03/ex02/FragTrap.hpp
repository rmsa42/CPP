/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:22:50 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/09 01:56:33 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap &obj);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &obj);
	
	void	attack(const std::string &target);
	void	highFiveGuys(void);
};

#endif