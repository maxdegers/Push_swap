# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 17:38:19 by mbrousse          #+#    #+#              #
#    Updated: 2024/01/26 11:20:01 by mbrousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES =	push_swap.c\
			push_swap_utils.c\
			error.c\
			node_utils.c\
			swap.c\
			push.c\
			rotate.c\
			reverce_rotate.c\
			solve.c

OBJECTS = ${SOURCES:.c=.o}

HEADER=	push_swap.h

NAME =	push_swap

CC =	cc

FLAGS =	-Wall -Wextra -Werror

all: ${NAME}

%.o:%.c  ${HEADER} libft/libft.h
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJECTS} Makefile
	make -C ./libft
	${CC} ${FLAGS} ${OBJECTS} -o ${NAME} -L./libft -lft

clean:
	make clean -C ./libft
	rm -f ${OBJECTS} 

fclean: clean
	make fclean -C ./libft
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re