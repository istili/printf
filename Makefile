# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: istili <istili@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 02:20:23 by istili            #+#    #+#              #
#    Updated: 2023/12/03 21:09:14 by istili           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libftprintf.a
CC		=	cc
FLAGES	=	-Wall -Wextra -Werror
ARC		=	ar rc

HEADER	=	ft_printf.h
FILE	=	ft_printf.c ft_print_char.c ft_print_digit.c ft_print_str.c \
			ft_print_hex.c ft_print_ads.c ft_print_unsigned.c 

OBJS	= $(FILE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(ARC) $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(FLAGES) -c $<

clean : 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean