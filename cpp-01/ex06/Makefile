# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 22:05:03 by ahooghe           #+#    #+#              #
#    Updated: 2023/10/18 22:20:25 by ahooghe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= harlFilter
CPPC= c++
CPPFLAGS= -Wall -Werror -Wextra
SRC= Harl.cpp main.cpp

all:
	$(CPPC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re