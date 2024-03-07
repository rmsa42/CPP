/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:03:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 00:50:06 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

/* # define CLEAR "\033[2J\033[H" */
# include <iomanip>
# include "Contact.hpp"

class	PhoneBook
{
private:
	Contact	contacts[8];
	int		id;

public:
	PhoneBook();
	
	void	add();
	void	print_line(std::string text) const;
	void	print_chart(int index) const;
	void	search();
};

#endif
