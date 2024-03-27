/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:45:24 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/18 17:25:27 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	~WrongAnimal();
	
	WrongAnimal	&operator=(const WrongAnimal &obj);

	std::string	getType() const;
	
	void	makeSound() const;

protected:

	std::string	type;
};

#endif