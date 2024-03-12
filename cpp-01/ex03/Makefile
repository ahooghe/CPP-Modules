# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 20:36:05 by ahooghe           #+#    #+#              #
#    Updated: 2023/10/18 20:39:02 by ahooghe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= unnecesary-violence
CPPC= c++
CPPFLAGS= -Wall -Werror -Wextra
SRC= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all:
	$(CPPC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re