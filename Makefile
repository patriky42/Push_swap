# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 13:13:45 by pabastid          #+#    #+#              #
#    Updated: 2023/08/12 13:56:41 by pabastid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKE			=	make --no-print-directory
NAME			=	push_swap

MAKEFILE			=	Makefile

PUSH			=	functions/push_swap.c $(SRCS)
SRCS			=	functions/check_all.c functions/create_list.c functions/operations.c functions/basic_sorts.c functions/sort_short.c functions/sort_long.c functions/find_and_move.c functions/about_chunks.c

OBJS			=	$(PUSH:.c=.o)

Libft_DIR		=	./libft
Libft			=	$(Libft_DIR)/libft.a
Printf_DIR		=	./printf
Printf			=	$(Printf_DIR)/libftprintf.a

CC				=	gcc
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -I ./

%.o: %.c push_swap.h $(MAKEFILE)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "${CC} -c $< -o $@"

all:
	@$(MAKE) libs
	@$(MAKE) $(NAME)

libs:
	@$(MAKE) -sC $(Libft_DIR)
	@$(MAKE) -sC $(Printf_DIR)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(Libft) $(Printf) -o $(NAME)
	@echo "Push swap compiled\n"

clean:
	@$(MAKE) fclean -sC $(Libft_DIR)
	@$(MAKE) fclean -sC $(Printf_DIR)
	@$(RM) $(OBJS)

fclean:
	@$(MAKE) clean
	@$(RM) $(NAME)
	@echo "Push swap cleaned\n"

re:
	@$(MAKE) fclean
	@$(MAKE)
	
.PHONY: all clean fclean re
