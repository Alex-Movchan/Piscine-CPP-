# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amovchan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 12:30:14 by amovchan          #+#    #+#              #
#    Updated: 2017/10/30 13:08:37 by amovchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phone_Book

FLAG = -Wall -Wextra -Werror

G = clang++

SRC = main.cpp \
        Phone_book.cpp \
        search_contact.cpp \
        add_in_book.cpp

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
