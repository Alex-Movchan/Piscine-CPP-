# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amovchan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 12:30:14 by amovchan          #+#    #+#              #
#    Updated: 2017/11/01 12:54:06 by amovchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

FLAG = -Wall -Wextra -Werror

G = clang++

SRC = ex07.cpp

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
