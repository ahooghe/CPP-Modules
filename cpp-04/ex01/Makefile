# Makefile made by ahooghe's Makefile-maker

# Name
NAME= ex01

# Compiler + Flags
CPPC= c++
CPPCFLAGS= -Wall -Werror -Wextra -std=c++98

# Sources
SRCS= ./Dog.cpp ./Animal.cpp ./Cat.cpp ./Brain.cpp ./main.cpp 

all: 
	$(CPPC) $(CPPCFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
