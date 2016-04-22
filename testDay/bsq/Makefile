# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idocrat <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/20 15:42:57 by idocrat           #+#    #+#              #
#    Updated: 2016/04/20 17:23:35 by idocrat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = srcs/main.c srcs/map.c srcs/file_print.c srcs/print.c srcs/print2.c
OBJ = main.o map.o file_print.o print.o print2.o
FLAGS = -Wall -Wextra -Werror
INCLUDE = includes/

all: $(NAME)
		gcc $(FLAGS) -I$(INCLUDE) -o $(NAME) $(OBJ)
$(NAME):
		gcc $(FLAGS) -I$(INCLUDE) -c $(SRC)
clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all
