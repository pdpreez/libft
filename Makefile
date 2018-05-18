# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppreez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/15 17:43:33 by ppreez            #+#    #+#              #
#    Updated: 2018/05/17 15:48:31 by ppreez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = *.c

OBJS = *.o

all: archive

archive: compile
	ar -rc $(NAME) $(OBJS)

compile: 
	gcc -c $(FILES) -Wall -Wextra -Werror

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
