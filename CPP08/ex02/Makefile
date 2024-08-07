# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/06 16:09:15 by rumachad          #+#    #+#              #
#    Updated: 2024/08/07 14:44:19 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutated

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):	$(OBJ)
		c++ -o $@ $(OBJ)

%.o:%.cpp
	$(CC) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all