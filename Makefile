# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppreez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/15 17:43:33 by ppreez            #+#    #+#              #
#    Updated: 2018/05/19 09:09:32 by ppreez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft*.c

OBJS = *.o

all: archive

archive: compile
	ar -rcv $(NAME) $(OBJS)

compile: 
	gcc -c $(FILES) -Wall -Wextra -Werror

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test: 
	gcc testmain.c $(NAME)
