/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:12:11 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/03 15:14:30 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:

	Cure();
	Cure(const Cure &obj);
	~Cure();
	
	Cure	&operator=(const Cure &obj);

	AMateria* clone() const;
	/* void	use(ICharacter& target); */
};

#endif