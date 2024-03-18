/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:45:24 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/18 17:25:27 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
public:

	Animal();
	Animal(const Animal &obj);
	~Animal();
	
	Animal	&operator=(const Animal &obj);

	std::string	getType() const;
	
	void	makeSound() const;

protected:

	std::string	type;
};

#endif