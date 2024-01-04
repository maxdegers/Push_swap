# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 17:38:19 by mbrousse          #+#    #+#              #
#    Updated: 2024/01/04 17:38:19 by mbrousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP_SOURCES =	push_swap.c\
			hexadecimal.c\
			pointer.c\
			ft_printf_utils.c

PUSH_SWAP_OBJECTS = ${PUSH_SWAP_SOURCES:.c=.o}

HEADER_FILE = push_swap.h

NAME = a.out

CC = cc

FLAGS =  -Wall -Wextra -Werror

%.o:%.c  ${HEADER_FILE}
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJECTS} Makefile
	ar -rc ${NAME} ${OBJECTS}

all: ${NAME}

clean:
	rm -f ${OBJECTS} 

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re