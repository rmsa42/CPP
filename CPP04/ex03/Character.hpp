/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:23:53 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/04 17:32:28 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "LinkedList.hpp"

class Character : public ICharacter
{
public:

	Character();
	Character(const std::string &name);
	Character(const Character &obj);
	virtual ~Character();
	
	Character	&operator=(const Character &obj);

	std::string const & getName() const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);

private:
	
	void	initInv();
	std::string	_name;
	LinkedList*	head;
	LinkedList*	floor;
	AMateria*	inv[4];
};

#endif