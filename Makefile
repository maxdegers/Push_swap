# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 17:38:19 by mbrousse          #+#    #+#              #
#    Updated: 2024/02/09 16:30:37 by mbrousse         ###   ########.fr        #
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

OBJ_D	= objs/

SRC_D	= src/

OBJECTS = ${SOURCES:%.c=${OBJ_D}%.o}

HEADER 	=	includes/push_swap.h

H_D 	= 	.

NAME 	=	push_swap

CC 		=	cc

FLAGS =	-Wall -Wextra -Werror

all: 
	@make --no-print-directory -C ./libft
	@make --no-print-directory ${NAME}

${OBJ_D}:
	@mkdir -p ${OBJ_D}

${OBJECTS} : ${OBJ_D}%.o: ${SRC_D}%.c  ${HEADER} libft/libft.h
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJ_D} ${OBJECTS} Makefile libft/libft.a
	${CC} ${FLAGS} ${OBJECTS} -o ${NAME} -L./libft -lft

clean:
	@make --no-print-directory clean -C ./libft
	@rm -rf ${OBJ_D} 

fclean: clean
	@make --no-print-directory fclean -C ./libft
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re