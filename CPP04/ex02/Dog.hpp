/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:02:03 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/01 13:57:32 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Dog: public Animal
{
public:

	Dog();
	Dog(const Dog &obj);
	virtual ~Dog();
	
	Dog	&operator=(const Dog &obj);

	void	makeSound() const;
	
	Brain* getBrain() const;
	
private:

	Brain *	_brain;
};

#endif