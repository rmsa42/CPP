# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rumachad <rumachad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/08 12:34:13 by rumachad          #+#    #+#              #
#    Updated: 2024/08/09 14:25:29 by rumachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

SRC =	BitcoinExchanger.cpp \
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
