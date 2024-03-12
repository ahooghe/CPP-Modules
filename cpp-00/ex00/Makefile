NAME= megaphone
CPPC= c++
CPPFLAGS= -Wall -Werror -Wextra
SRC=megaphone.cpp

all:
	$(CPPC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re