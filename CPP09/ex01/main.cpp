/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:14:56 by rumachad          #+#    #+#             */
/*   Updated: 2024/08/12 15:12:49 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
	RPN rpn;

	if (argc > 1) {
		try {
			rpn.calculate(argv[1]);
			rpn.printStack();
		} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}