# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 21:18:52 by ahooghe           #+#    #+#              #
#    Updated: 2023/10/20 23:14:26 by ahooghe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fragtrap
CPPC= c++
CPPFLAGS= -Wall -Werror -Wextra
SRC= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

all:
	$(CPPC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re