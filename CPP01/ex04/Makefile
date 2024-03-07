# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 08:05:50 by rumachad          #+#    #+#              #
#    Updated: 2024/02/15 15:22:05 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		c++ -o $(NAME) $(OBJ)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@
	
clean: 
		rm -rf $(OBJ)
		rm -f *.replace

fclean: clean
		rm -f $(NAME)

re: fclean all
