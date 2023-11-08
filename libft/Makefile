# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkane <mkane@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 16:37:53 by mkane             #+#    #+#              #
#    Updated: 2023/11/08 14:31:48 by mkane            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

# NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c main.c 

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADERS = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -include$(HEADERS) -o $(NAME) $(OBJ)

# $(NAME): $(OBJ)
# 	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -include$(HEADERS) -o $@ -c $<

clean:
	-rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME)

re: fclean all