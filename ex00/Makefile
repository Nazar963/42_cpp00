# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 11:37:53 by naal-jen          #+#    #+#              #
#    Updated: 2023/05/26 11:32:49 by naal-jen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++ -Wall -Wextra -Werror -std=c++98
CFILES = megaphone.cpp

all:
	$(CC) $(CFILES) -o megaphone

clean:
	rm megaphone

fclean: clean

re: fclean all

.PHONY: all clean flcean re