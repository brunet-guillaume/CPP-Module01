# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 09:51:16 by gbrunet           #+#    #+#              #
#    Updated: 2024/02/09 14:53:17 by gbrunet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex04

TESTEUR = testeur

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp EditFile.cpp

OBJ = main.o EditFile.o

SRC_T = testeur.cpp

OBJ_T = testeur.o

all : $(NAME) $(TESTEUR)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(TESTEUR) : $(OBJ_T)
	$(CC) $(OBJ_T) -o $(TESTEUR)

clean :
	$(RM) $(OBJ) $(OBJ_T)

fclean :
	make clean
	$(RM) $(NAME) $(TESTEUR) tests/file1.replace tests/file2.replace \
		tests/file3.replace tests/file4.replace tests/file5.replace \
		tests/file6.replace

re :
	make fclean
	make all
