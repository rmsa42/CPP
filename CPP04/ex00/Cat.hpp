/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:26:15 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/27 12:53:33 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
public:

	Cat();
	Cat(const Cat &obj);
	virtual ~Cat();
	
	Cat	&operator=(const Cat &obj);
	
	virtual void	makeSound() const;
};

#endif