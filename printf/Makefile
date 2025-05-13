# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 16:01:24 by mnirska           #+#    #+#              #
#    Updated: 2024/11/08 13:36:30 by mnirska          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = \
	ft_printf.c ft_printchar.c ft_printstr.c ft_printptrhex.c ft_printnbr.c \
	ft_printunsigned.c ft_printhexlow.c ft_printhexup.c
CC = cc
FLAGS = -Wall -Werror -Wextra
LIBC = ar rc
RM = rm -f
NAME = libftprintf.a
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

.PHONY: all bonus clean fclean re