# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 15:35:57 by mtrudel           #+#    #+#              #
#    Updated: 2016/11/03 18:56:05 by mtrudel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = ft_display_file.c

all: $(NAME)
$(NAME):
	gcc  -c -Wall -Wextra -Werror $(SRCS)
	gcc -o $(NAME) ft_display_file.o
clean:
	/bin/rm -f ft_display_file.o
fclean: clean
	/bin/rm -f $(NAME)
