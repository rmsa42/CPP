/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:52:44 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/03 16:32:35 by rumachad         ###   ########.fr       */
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
	~Ice();
	
	Ice	&operator=(const Ice &obj);

	AMateria* clone() const;
	void	use(ICharacter& target);
};

#endif