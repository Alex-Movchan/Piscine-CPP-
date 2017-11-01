# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amovchan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 12:30:14 by amovchan          #+#    #+#              #
#    Updated: 2017/11/01 16:31:37 by amovchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cato9tails

FLAG = -Wall -Wextra -Werror

G = clang++

SRC = main.cpp

OBG = $(SRC:.cpp=.o)

DELL = rm -f

all: $(NAME)

$(NAME): $(OBG)
	@$(G) $(FLAG) $(SRC) -o $(NAME)

%.o: %.cpp
	$(G) $(FLAG) -c $< -o $@

clean:
	$(DELL) $(OBG)

fclean: clean
	$(DELL) $(NAME)

re: fclean all
