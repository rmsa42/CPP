/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:47:57 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/04 12:09:52 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
public:

	MateriaSource();
	MateriaSource(const MateriaSource &obj);
	virtual ~MateriaSource();
	
	MateriaSource	&operator=(const MateriaSource &obj);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

private:

	void	initSpace();	
	AMateria* space[4];
};

#endif