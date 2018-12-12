# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmadec <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 15:50:41 by gmadec            #+#    #+#              #
#    Updated: 2017/11/08 05:10:10 by gmadec           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

NAME2 = ft_display_file.o

SRC = ./ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra ft_display_file.c
	gcc -o $(NAME) $(NAME2)

$(CLEAN):
	/bin/rm -f $(NAME2)

$(FCLEAN):
	/bin/rm -f $(NAME)

clean:
	$(CLEAN)

fclean: clean
	$(FCLEAN)

re : fclean all
