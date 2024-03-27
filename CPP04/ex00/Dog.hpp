/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:02:03 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/27 12:53:24 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
public:

	Dog();
	Dog(const Dog &obj);
	virtual ~Dog();
	
	Dog	&operator=(const Dog &obj);

	virtual void	makeSound() const;
};

#endif