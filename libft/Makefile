# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 16:01:24 by mnirska           #+#    #+#              #
#    Updated: 2025/05/13 19:02:57 by mnirska          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_atol.c

CC = gcc
FLAGS = -Wall -Werror -Wextra
LIBC = ar rc
RM = rm -f
NAME = libft.a
OBJS = ${SRCS:.c=.o}

all: ${NAME}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I.
	
${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	
clean:
	${RM} ${OBJS}
	
fclean: clean
	${RM} ${NAME}
	
re: fclean all

.PHONY: all clean fclean re