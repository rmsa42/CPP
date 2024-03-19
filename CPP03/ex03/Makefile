# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 22:48:30 by rumachad          #+#    #+#              #
#    Updated: 2024/03/11 14:56:29 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	diamond

SRC =	DiamondTrap.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
		ClapTrap.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -Wshadow -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ -o $(NAME) $(OBJ)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
