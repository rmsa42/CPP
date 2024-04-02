/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:39:35 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 20:41:09 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
public:

	Ice();
	Ice(const Ice &obj);
	virtual ~Ice();
	
	Ice	&operator=(const Ice &obj);

	AMateria*	clone() const;

	virtual void	use(ICharacter& target);

};

#endif