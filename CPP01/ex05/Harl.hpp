/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:42:33 by rumachad          #+#    #+#             */
/*   Updated: 2024/04/04 15:26:52 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class	Harl
{
public:

	Harl();
	~Harl();

	void	complain(std::string level);

private:

	void	debug();
	void	info();
	void	warning();
	void	error();
};

#endif
