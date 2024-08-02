/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:45:23 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/02 17:08:04 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
public:

	Data();
	Data(int nbr);
	Data(const Data &obj);
	~Data();
	
	Data	&operator=(const Data &obj);

	int _nbr;
};

#endif