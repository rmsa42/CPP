/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:34:30 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/05 17:44:08 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:

	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &obj);
	virtual ~AMateria();
	
	AMateria	&operator=(const AMateria &obj);
	
	std::string const & getType() const;

	virtual	AMateria* clone() const = 0;
	virtual void	use(ICharacter& target);

protected:
	
	std::string	_type;
};

void	Logger(std::string str);

#endif