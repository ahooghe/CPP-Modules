# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 21:18:52 by ahooghe           #+#    #+#              #
#    Updated: 2023/12/04 13:36:38 by ahooghe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= diamondtrap
CPPC= c++
CPPFLAGS= -Wall -Werror -Wextra -Wshadow
SRC= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

all:
	$(CPPC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
