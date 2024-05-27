# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/21 12:00:04 by luiribei          #+#    #+#              #
#    Updated: 2024/05/24 11:15:09 by luiribei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_print_char.c ft_print_str.c \
			ft_print_ptr.c ft_print_unsigned.c \
			ft_print_digits.c ft_print_upper_digits.c
			
CC	=	@cc
CFLAGS	= -Wall -Wextra -Werror
OBJS	=	${SRCS:.c=.o}
RM	=	@rm -f
LIBC	=	@ar -rcs
INCS	=	.

${NAME}: ${OBJS}
	@echo "Created .o files."
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

fclean: clean
	${RM} ${NAME}
	@echo "Cleaned printflibft.a."

clean:
	${RM} -f ${OBJS}
	@echo "Cleaned .o files."

re: fclean all

.PHONY: all fclean clean re .c.o