# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 11:37:53 by naal-jen          #+#    #+#              #
#    Updated: 2023/06/02 09:57:10 by naal-jen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp phone.class.cpp
EXE = phonebook

all: $(EXE)

$(EXE):
	$(CC) -g $(CFILES) phone.class.hpp -o phonebook

clean:
	rm phonebook

fclean: clean

re: fclean all

.PHONY: all clean flcean re