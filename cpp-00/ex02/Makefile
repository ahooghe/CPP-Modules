# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 16:00:34 by ahooghe           #+#    #+#              #
#    Updated: 2023/10/18 16:01:25 by ahooghe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= log
CPPC= c++
CPPFLAGS= -Wall -Werror -Wextra
SRC=Account.cpp tests.cpp 

all:
	$(CPPC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re