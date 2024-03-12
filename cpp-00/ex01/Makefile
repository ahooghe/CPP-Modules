# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 22:38:27 by ahooghe           #+#    #+#              #
#    Updated: 2023/10/17 22:38:54 by ahooghe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= phonebook
CPPC= c++
CPPFLAGS= -Wall -Werror -Wextra
SRC=phonebook.cpp contact.cpp main.cpp

all:
	$(CPPC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re