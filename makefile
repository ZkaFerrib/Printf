# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 16:16:13 by gafernan          #+#    #+#              #
#    Updated: 2022/09/27 16:59:00 by gafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

SRC = ft_printf.c	\
			ft_putchar.c	\
			ft_putnbr.c 			\
			ft_putunbr.c	\
			ft_putvoid.c			\
			ft_puthexa.c	\
			ft_putstr.c

OBJ = $(SRC.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
				ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
				gcc $(CFLAGS) -c $(SRC)
			
clean:
				@rm -f $(OBJ)
fclean:
				@rm -f $(NAME) $(OBJ)
re: fclean all

.PHONY: all clean fclean re