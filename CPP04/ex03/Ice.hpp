/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:39:35 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 16:46:38 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:

	Ice();
	Ice(const Ice &obj);
	virtual ~Ice();
	
	Ice	&operator=(const Ice &obj);

	AMateria*	clone() const;

	/* virtual void	use(ICharacter& target); */

};

#endif