# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkane <mkane@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 18:09:23 by mkane             #+#    #+#              #
#    Updated: 2023/12/22 02:35:57 by mkane            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_DIR = ./src/

UTILS_DIR = ./utils/

SRC = main.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADERS = ./includes/push_swap.h

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	mv libft/libft.a .
	$(CC) $(CFLAGS) -I$(HEADERS) ${OBJ} -L. -lft -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -include$(HEADERS) -o $@ -c $<

clean:
	-rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME) libft.a

re: fclean all

