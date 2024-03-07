# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 17:01:10 by rumachad          #+#    #+#              #
#    Updated: 2024/02/14 00:44:56 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = log

SRC =	Account.cpp \
		tests.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -std=c++98 #-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
		c++ -o $(NAME) $(OBJ)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@
	
clean: 
		rm -rf $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
