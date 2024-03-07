/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:03:37 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/13 03:53:51 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	id = 0;
}

void	PhoneBook::add()
{
	std::string	firstname, lastname, nickname;
	std::string	phone_nbr, dark_secret;

	std::cout /* << CLEAR */ << "Contact Creation" << std::endl;
	std::cout << "First Name: ";
	std::cin >> firstname;
	std::cout << "Last Name: ";
	std::cin >> lastname;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Phone Number: ";
	std::cin >> phone_nbr;
	std::cout << "Darkest Secret: ";
	std::cin >> dark_secret;
	if (!firstname.empty() && !lastname.empty() && !nickname.empty()
		&& !phone_nbr.empty() && !dark_secret.empty())
		contacts[id++ % 8] = Contact(firstname, lastname, nickname,
								phone_nbr, dark_secret);
	else
		std::cout << "Current Contact creation failed" << std::endl;
}

void	PhoneBook::print_line(std::string text) const
{
	if (text.length() > 10)
	{
		text.resize(9);
		text.append(".");
	}
	std::cout << std::setw(10) << text << "|";
}

void	PhoneBook::print_chart(int index) const
{
	std::cout << "First Name: " << contacts[index].get_firstname() << std::endl;
	std::cout << "Last Name: " << contacts[index].get_lastname() << std::endl;
	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].get_phone_nbr() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].get_dark_secret() << std::endl;
}

void	PhoneBook::search()
{
	std::string	input_index;
	
	std::cout /* << CLEAR  */<< "Search Contact" << std::endl;
	this->print_line("Index");
	this->print_line("First Name");
	this->print_line("Last Name");
	this->print_line("Nickname");
	std::cout << std::endl;
	for (int i = 0; i < 8 && i < (id % 8); i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->print_line(contacts[i % 8].get_firstname());
		this->print_line(contacts[i % 8].get_lastname());
		this->print_line(contacts[i % 8].get_nickname());
		std::cout << std::endl;
	}
	std::cout << "Choose Index to show: ";
	std::cin >> input_index;
	if (input_index.length() == 1
		&& input_index[0] >= '0' && input_index[0] <= '8')
		this->print_chart(input_index[0] - '0');
	else
		std::cout << "Wrong Index" << std::endl;
}
