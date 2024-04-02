/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:05:18 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 20:14:45 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "MateriaSource.hpp"

class Character : public ICharacter
{
public:

	Character();
	Character(const Character &obj);
	Character(const std::string name);
	virtual ~Character();
	
	std::string const &	getName() const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
	
	Character	&operator=(const Character &obj);

private:
	
	std::string	_name;
	AMateria*	inventory[4];
};

#endif