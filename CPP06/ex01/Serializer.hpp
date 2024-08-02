/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:39:34 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/02 16:56:32 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include <iostream>
# include "Data.hpp"

class Serializer
{
public:

	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);

private:

	Serializer();
	Serializer(const Serializer &obj);
	~Serializer();
	
	Serializer	&operator=(const Serializer &obj);
};

#endif