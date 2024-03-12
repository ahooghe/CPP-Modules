NAME = ex03
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = \
    ./PresidentialPardonForm.cpp \
    ./main.cpp \
    ./AForm.cpp \
    ./ShrubberyCreationForm.cpp \
    ./Intern.cpp \
    ./RobotomyRequestForm.cpp \
    ./Bureacrat.cpp \

HEADERS = \
    ./Bureaucrat.hpp \
    ./AForm.hpp \
    ./ShrubberyCreationForm.hpp \
    ./RobotomyRequestForm.hpp \
    ./Intern.hpp \
    ./PresidentialPardonForm.hpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CC) -I./. $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all
PHONY: all clean fclean re

