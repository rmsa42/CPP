# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:52:37 by rumachad          #+#    #+#              #
#    Updated: 2024/08/02 15:53:02 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize 

SRC =	Serializer.cpp \
		Data.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -std=c++98

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