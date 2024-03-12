# Makefile made by ahooghe's Makefile-maker

# Name
NAME= ex03

# Compiler + Flags
CPPC= c++
CPPCFLAGS= -Wall -Werror -Wextra -std=c++98

# Sources
SRCS= ./MateriaSource.cpp ./Character.cpp ./AMateria.cpp ./main.cpp 

all: 
	$(CPPC) $(CPPCFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
