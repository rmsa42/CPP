/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:03:58 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/02 14:10:04 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define CLEAR "\033c"
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
	void	printTable() const;
	void	search();
};

#endif
