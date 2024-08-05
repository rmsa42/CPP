# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 16:33:34 by rumachad          #+#    #+#              #
#    Updated: 2024/08/05 16:42:06 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template

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