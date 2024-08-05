# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 15:52:37 by rumachad          #+#    #+#              #
#    Updated: 2024/08/05 10:57:07 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = dynamic 

SRC =	A.cpp \
		B.cpp \
		C.cpp \
		Base.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

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