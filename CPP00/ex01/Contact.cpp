/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:15:02 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/13 03:01:39 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){	}

Contact::Contact(std::string first, std::string last, 
	std::string nick, std::string phone, std::string dark)
{
	firstname = first;
	lastname = last;
	nickname = nick;
	phone_nbr = phone;
	dark_secret = dark;
}

std::string	Contact::get_firstname() const
{
	return (firstname);
}

std::string	Contact::get_lastname() const
{
	return (lastname);
}

std::string	Contact::get_nickname() const
{
	return (nickname);
}

std::string	Contact::get_phone_nbr() const
{
	return (phone_nbr);
}

std::string	Contact::get_dark_secret() const
{
	return (dark_secret);
}
