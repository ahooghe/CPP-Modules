# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 20:30:17 by ahooghe           #+#    #+#              #
#    Updated: 2023/10/18 20:30:25 by ahooghe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= brain
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

.PHONY: all clean fclean re