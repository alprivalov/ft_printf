# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alprival <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 11:57:09 by alprival          #+#    #+#              #
#    Updated: 2022/04/18 15:38:53 by alprival         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRC		= 	ft_printf.c \
			ft_utils.c \
			ft_utils_two.c \

OBJ		= $(SRC:.c=.o)

CC		= gcc -g

RM		= rm -f

CFLAGS = -Werror -Wextra -Wall 

$(NAME):	$(OBJ)
	ar rcs libftprintf.a $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
