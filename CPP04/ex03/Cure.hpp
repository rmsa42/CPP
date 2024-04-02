/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 20:39:56 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 20:45:42 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:

	Cure();
	Cure(const Cure &obj);
	virtual ~Cure();

	Cure	&operator=(const Cure &obj);

	AMateria*	clone() const;
	
	virtual void	use(ICharacter& target);
	
};

#endif