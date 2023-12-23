# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkane <mkane@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 18:09:23 by mkane             #+#    #+#              #
#    Updated: 2023/12/23 01:43:31 by mkane            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

PARSING_DIR = ./src/parsing/

PUSH_SWAP_DIR = ./src/push_swap/

UTILS_DIR = ./utils/

SRC = main.c\
	$(PARSING_DIR)parsing.c\
	$(UTILS_DIR)ft_long_atoi.c\
	$(UTILS_DIR)ft_create_stack.c\
	$(UTILS_DIR)ft_stack_add_back.c\
	$(UTILS_DIR)ft_stack_last.c\
	$(UTILS_DIR)ft_fill_stack_a.c\
	$(UTILS_DIR)ft_free_stack.c\

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

HEADERS = ./includes/push_swap.h

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	mv libft/libft.a .
	$(CC) $(CFLAGS) -I$(HEADERS) ${OBJ} -L. -lft -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -include$(HEADERS) -o $@ -c $<

clean:
	make -C libft clean
	-rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME) libft.a

re: fclean all
