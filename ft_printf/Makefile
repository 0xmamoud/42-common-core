# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kane <kane@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 18:09:23 by mkane             #+#    #+#              #
#    Updated: 2023/11/21 19:11:30 by kane             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

TEST = a.out

SRC_DIR = ./src/

UTILS_DIR = ./utils/

LIBFT_DIR = ./libft/

SRC = $(SRC_DIR)ft_printf.c\
	  $(SRC_DIR)ft_parser.c\
	  $(SRC_DIR)ft_putptr.c\
	  $(SRC_DIR)ft_put_uint.c\
	  $(UTILS_DIR)ft_putchar.c\
	  $(UTILS_DIR)ft_putstr.c\
	  $(UTILS_DIR)ft_putnbr_base.c\
	  main.c\

OBJ = $(SRC:.c=.o)

LIBFT = $(LIBFT_DIR)ft_strlen.c\

LIBFT_OBJ = $(LIBFT:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADERS = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_OBJ)
	ar rcs $(NAME) $(OBJ) $(LIBFT_OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -include$(HEADERS) -o $@ -c $<

clean:
	-rm -f $(OBJ) $(LIBFT_OBJ)

fclean: clean
	-rm -f $(NAME) $(TEST)

re: fclean all

test: $(TEST)

$(TEST): $(OBJ) $(LIBFT_OBJ)
	$(CC) $(CFLAGS) -include$(HEADERS) -o $(TEST) $(OBJ) $(LIBFT_OBJ)
