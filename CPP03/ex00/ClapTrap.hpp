/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:43:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/09 11:54:46 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
public:

	ClapTrap();
	ClapTrap(const ClapTrap &obj);
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap	&operator=(const ClapTrap &obj);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printStatus();

	std::string getName() const;
	int			getHp() const;
	int			getEp() const;
	int			getAd() const;

private:
	
	std::string	_name;
	int 		_HP;
	int 		_EP;
	int 		_AD;
};

#endif
