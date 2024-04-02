/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:03:37 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/02 15:55:01 by rumachad         ###   ########.fr       */
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

	std::cout << CLEAR;
	std::cout << "Contact Creation" << std::endl;
	std::cout << "First Name: ";
	std::getline(std::cin, firstname);
	std::cout << "Last Name: ";
	std::getline(std::cin, lastname);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phone_nbr);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, dark_secret);
	if (!firstname.empty() && !lastname.empty() && !nickname.empty()
		&& !phone_nbr.empty() && !dark_secret.empty())
		contacts[id++ % 8] = Contact(firstname, lastname, nickname,
								phone_nbr, dark_secret);
	else
		std::cout << "\nCurrent Contact creation failed" << std::endl;
	std::cout << "\nPress Enter to conitnue" << std::endl;
	std::cin.ignore();
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
	std::cout << CLEAR;
	std::cout << "First Name: " << contacts[index].get_firstname() << std::endl;
	std::cout << "Last Name: " << contacts[index].get_lastname() << std::endl;
	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].get_phone_nbr() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].get_dark_secret() << std::endl;
}

void	PhoneBook::printTable() const
{
	this->print_line("Index");
	this->print_line("First Name");
	this->print_line("Last Name");
	this->print_line("Nickname");
	std::cout << std::endl;
	for (int i = 0; i < 8 && i < id; i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->print_line(contacts[i % 8].get_firstname());
		this->print_line(contacts[i % 8].get_lastname());
		this->print_line(contacts[i % 8].get_nickname());
		std::cout << std::endl;
	}
}

void	PhoneBook::search()
{
	std::string	input_index;
	int maxindex;
	
	std::cout << CLEAR << "Search Contact" << std::endl;
	if (this->id == 0)
	{
		std::cout << "No Contacts" << std::endl;
		std::cout << "\nPress Enter to conitnue" << std::endl;
		std::cin.ignore();
		return ;
	}
	if (this->id > 7)
		maxindex = 8;
	else
		maxindex = this->id;
	this->printTable();
	std::cout << "Choose Index to show: ";
	std::getline(std::cin, input_index);
	if (input_index.length() == 1 && input_index[0] >= '0'
		&& input_index[0] <= '7' && (input_index[0] - '0') < maxindex)
		this->print_chart(input_index[0] - '0');
	else
		std::cout << "Wrong Index" << std::endl;
	std::cout << "\nPress Enter to conitnue" << std::endl;
	std::cin.ignore();
}
