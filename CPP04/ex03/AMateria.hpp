/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:21:11 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 21:35:22 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
public:

	AMateria();
	/* AMateria(const AMateria &obj); */
	AMateria(std::string const & type);
	virtual ~AMateria();
	
	AMateria	&operator=(const AMateria &obj);
	std::string const & getType() const;
	
	virtual	AMateria* clone() const = 0;
	virtual void	use(ICharacter& target);

protected:
	
	std::string	_type;
};

#endif