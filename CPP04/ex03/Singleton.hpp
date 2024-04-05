/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Singleton.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:44:25 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/05 16:14:55 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLETON_HPP
# define SINGLETON_HPP

#include "AMateria.hpp"

struct SpellList
{
	AMateria* spell;
	SpellList* next;
};

class Singleton
{
public:
	
	void	addSpell(AMateria* s);
	static		Singleton& getInstance();

private:
	
	Singleton();
	Singleton(const Singleton &obj);
	~Singleton();

	Singleton	&operator=(const Singleton &obj);

	SpellList* list;
};

#endif