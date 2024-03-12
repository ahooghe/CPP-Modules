#!/bin/bash

#!/bin/bash
NAME=$(basename "$(pwd)")
INCLUDES=.
SOURCES=.
echo "NAME = $NAME" > Makefile
echo "CC = g++" >> Makefile
echo "CFLAGS = -Wall -Wextra -Werror -std=c++98 -g" >> Makefile
echo "SRCS = \\" >> Makefile

# Find all .cpp files in the srcs directory and add them to the makefile
for file in $(find $SOURCES -name "*.cpp"); do
    echo "    $file \\" >> Makefile
done

echo >> Makefile
echo "HEADERS = \\" >> Makefile

# Find all .h files in the inc directory and add them to the makefile
for file in $(find $INCLUDES -name "*.hpp"); do
    echo "    $file \\" >> Makefile
done

echo >> Makefile
echo "OBJS = \$(SRCS:.cpp=.o)" >> Makefile
echo >> Makefile
echo "all: \$(NAME)" >> Makefile
echo "\$(NAME): \$(OBJS)" >> Makefile
echo -e "\t\$(CC) \$(CFLAGS) -o \$(NAME) \$(OBJS)" >> Makefile
echo >> Makefile
echo '%.o: %.cpp $(HEADERS)' >> Makefile
echo -e "\t\$(CC) -I./$INCLUDES \$(CFLAGS) -c \$< -o \$@" >> Makefile
echo >> Makefile
echo "clean:" >> Makefile
echo -e "\trm -f \$(OBJS)" >> Makefile
echo >> Makefile
echo "fclean: clean" >> Makefile
echo -e "\trm -f \$(NAME)" >> Makefile
echo "re: fclean all" >> Makefile
echo "PHONY: all clean fclean re" >> Makefile
echo >> Makefile
