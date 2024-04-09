/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:34:30 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/09 16:00:12 by rumachad         ###   ########.fr       */
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

	bool	getFlag();
	void	setFlag(bool value);

protected:
	
	std::string	_type;
	bool		flag;
};

void	Logger(std::string str);

#endif