SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c  ft_isascii.c ft_isprint.c ft_tolower.c ft_toupper.c \
	   ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
	   ft_strncmp.c ft_memset.c ft_memcpy.c ft_bzero.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c


OBJS = ${SRCS:.c=.o}
HEADER = libft.h

NAME = libft.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c $(HEADER)
	${CC} ${CFLAGS} -I libft.h -c $< -o $@
	@echo "${CC} -c $< -o $@"

all:		${NAME}

${NAME}:	${OBJS} ${HEADER}
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}
	@echo "Libft compiled\n"

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}
	@echo "Libft cleaned"

re:			fclean all

.PHONY:		all clean fclean re 
