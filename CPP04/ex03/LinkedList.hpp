/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:16:41 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/04 17:22:45 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_HPP
# define LINKEDLIST_HPP

# include "AMateria.hpp"

class LinkedList
{
public:

	LinkedList();
	/* LinkedList(const LinkedList &obj); */
	~LinkedList();
	
	/* LinkedList	&operator=(const LinkedList &obj); */

	AMateria* spell;
	class LinkedList* next;
};

#endif