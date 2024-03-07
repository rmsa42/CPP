/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:07:11 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 00:45:28 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_nbr;
	std::string	dark_secret;
	
public:
	Contact();
	Contact(std::string first, std::string last, std::string nick,
		std::string phone, std::string dark);
	std::string	get_firstname() const;
	std::string	get_lastname() const;
	std::string	get_nickname() const;
	std::string	get_phone_nbr() const;
	std::string	get_dark_secret() const;
};

#endif
