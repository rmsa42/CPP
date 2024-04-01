/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:22:49 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 17:24:55 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
public:

	virtual	~IMateriaSource() {};
	virtual void	learnMateria(AMateria*) = 0;
	virtual	AMateria*	createMateria(std::string const & type) = 0;
	
};

#endif