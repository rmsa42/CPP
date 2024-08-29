# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/08 12:34:13 by rumachad          #+#    #+#              #
#    Updated: 2024/08/29 14:33:06 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRC =	PmergeMe.cpp \
		main.cpp

CXX = c++ -Wall -Wextra -Werror -std=c++98

OBJ = ${SRC:.cpp=.o}

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
