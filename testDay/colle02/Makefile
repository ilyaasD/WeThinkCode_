# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idocrat <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/16 12:39:18 by idocrat           #+#    #+#              #
#    Updated: 2016/04/16 12:46:39 by idocrat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME    =   colle-2

SRCS    =   print.c  read.c check.c check_2.c ass.c 

LIBRARY     =   includes/header.h

all     :   $(NAME)

$(NAME) :
	gcc -o $(NAME) -Wall -Werror -Wextra $(SRCS) -I $(LIBRARY)

fclean: 
	/bin/rm -f $(NAME)
