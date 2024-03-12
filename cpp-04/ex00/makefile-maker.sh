#!/bin/bash

SRCS=$(find . -name "*.cpp" | tr '\n' ' ')
CPPC="c++"
CPPCFLAGS="-Wall -Werror -Wextra -std=c++98"
RM="rm -f"
NAME=$(basename "$(pwd)")

cat <<EOF > Makefile
# Makefile made by ahooghe's Makefile-maker

# Name
NAME= $NAME

# Compiler + Flags
CPPC= $CPPC
CPPCFLAGS= $CPPCFLAGS

# Sources
SRCS= $SRCS

all: 
	\$(CPPC) \$(CPPCFLAGS) \$(SRCS) -o \$(NAME)

clean:
	$RM *.o

fclean: clean
		$RM \$(NAME)

re: fclean all

.PHONY: all clean fclean re
EOF