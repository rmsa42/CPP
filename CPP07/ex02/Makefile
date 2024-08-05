# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 19:09:50 by rumachad          #+#    #+#              #
#    Updated: 2024/08/05 22:54:04 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

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