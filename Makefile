# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 19:41:22 by viktortr          #+#    #+#              #
#    Updated: 2023/04/16 20:09:00 by viktortr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_putaddress.c		ft_puthex.c	 	ft_putnbr.c		\
		ft_putstr.c 		ft_putchar.c	ft_printf.c		
		
OBJS :=$(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME) : $(OBJS)
	ar -crs $@ $^

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
