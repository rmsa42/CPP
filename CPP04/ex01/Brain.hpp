/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:05:01 by rumachad          #+#    #+#             */
/*   Updated: 2024/03/27 17:22:30 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
public:

	Brain();
	Brain(const Brain &obj);
	~Brain();
	
	Brain	&operator=(const Brain &obj);

private:
	
	std::string* ideas;
};

#endif