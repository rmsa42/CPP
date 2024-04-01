# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 16:42:23 by rumachad          #+#    #+#              #
#    Updated: 2024/04/01 15:55:28 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface

SRC =	main.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		c++ -fsanitize=address -o $(NAME) $(OBJ)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@
	
clean: 
		rm -rf $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
