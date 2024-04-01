/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:27:28 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 17:34:10 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:

	MateriaSource();
	MateriaSource(const MateriaSource &obj);
	virtual ~MateriaSource();
	
	void	learnMateria(AMateria* spell);
	AMateria* createMatria(std::string const & type);
	MateriaSource	&operator=(const MateriaSource &obj);

};

#endif