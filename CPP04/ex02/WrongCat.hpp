/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:26:15 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/27 12:59:09 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:

	WrongCat();
	WrongCat(const WrongCat &obj);
	~WrongCat();
	
	WrongCat	&operator=(const WrongCat &obj);

	void	makeSound() const;
};

#endif