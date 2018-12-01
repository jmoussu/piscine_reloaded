# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 18:50:17 by jmoussu           #+#    #+#              #
#    Updated: 2018/11/07 19:12:25 by jmoussu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INC = includes/

all: $(LIB)

$(LIB) : 
	gcc -Wall -Werror -Wextra -c $(SRC) -I$(INC)
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(LIB)

re: fclean all
