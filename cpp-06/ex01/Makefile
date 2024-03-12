NAME = ex01
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = \
    ./main.cpp \
    ./Serializer.cpp \

HEADERS = \
    ./Serializer.hpp \

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

