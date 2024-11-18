# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/17 12:03:26 by vodebunm          #+#    #+#              #
#    Updated: 2024/11/18 11:04:33 by vodebunm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyPhonebook

# Source file for the project
SRC = ClassContact.cpp ClassPhonebook.cpp main.cpp

# Object files will be derived from the source files
OBJ = $(SRC:.cpp=.o)

# Compiler to be used
CC = g++

# Compilation flags for warnings and C++ standard compliance
FLAGS =  -Wall -Wextra -Werror -std=c++98

# Command to remove files
RM = rm -f

# Default target to build the executable
all: $(NAME)

# Target to link the object files and create the executable
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

# Target to remove the object files
clean:
	$(RM) $(OBJ)

# Target to remove both object files and the executable
fclean: clean
	$(RM) $(NAME)

# Target to clean and rebuild the project
re: fclean $(NAME)

# Special target to indicate that these targets do not represent files
.PHONY: all clean fclean re
