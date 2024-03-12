# Makefile made by ahooghe's Makefile-maker

# Name
NAME= ex00

# Compiler + Flags
CPPC= c++
CPPCFLAGS= -Wall -Werror -Wextra -std=c++98

# Sources
SRCS= ./WrongDog.cpp ./Dog.cpp ./WrongCat.cpp ./Animal.cpp ./WrongAnimal.cpp ./Cat.cpp ./main.cpp 

all: 
	$(CPPC) $(CPPCFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
