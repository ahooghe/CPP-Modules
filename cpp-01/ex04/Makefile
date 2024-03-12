# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 21:16:07 by ahooghe           #+#    #+#              #
#    Updated: 2023/10/18 21:17:33 by ahooghe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= sed
CPPC= c++
CPPFLAGS= -Wall -Werror -Wextra
SRC= main.cpp

all:
	$(CPPC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean all