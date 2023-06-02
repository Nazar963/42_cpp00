# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 11:37:53 by naal-jen          #+#    #+#              #
#    Updated: 2023/06/02 09:59:19 by naal-jen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++ -Wall -Wextra -Werror -std=c++98
CFILES = Account.cpp tests.cpp
EXE = accounting

all: $(EXE)

$(EXE):
	$(CC) $(CFILES) -o accounting

clean:
	rm accounting

fclean: clean

re: fclean all

.PHONY: all clean flcean re