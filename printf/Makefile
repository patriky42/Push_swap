# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 13:19:43 by pabastid          #+#    #+#              #
#    Updated: 2023/08/12 13:57:49 by pabastid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

MKFL	=	Makefile

SRCS	=	ft_printf.c ft_puthexnbr.c ft_putptr.c handletype.c ft_putchar.c ft_putnbr.c \
			ft_putctype.c ft_itoa.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror -I.

%.o: %.c ft_printf.h $(MKFL)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "${CC} -c $< -o $@"

all:
	@$(MAKE) $(NAME)

$(NAME):	$(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Printf Compiled\n"

clean:
	$(RM) $(NAME) $(OBJS)

fclean:	
	$(MAKE) clean
	$(RM) $(NAME)
	@echo "Printf cleaned"

re:	
	$(MAKE) fclean
	$(MAKE)

.PHONY: all clean fclean re
