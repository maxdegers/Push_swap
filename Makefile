# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:52:23 by mbrousse          #+#    #+#              #
#    Updated: 2024/02/28 17:01:11 by mbrousse         ###   ########.fr        #
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

OBJ_D	= .objs/

SRC_D	= src/

OBJECTS = ${SOURCES:%.c=${OBJ_D}%.o}

HEADER_DIR      =       ./includes
HEADER  =       $(HEADER_DIR)/push_swap.h
H_D 	= 	.

NAME 	=	push_swap

CC 		=	cc

FLAGS =	-Wall -Wextra -Werror -g3

GREEN                   =       \033[1;32m
BLUE                    =       \033[1;34m
RED                             =       \033[1;31m
YELLOW					=       \033[1;33m
DEFAULT					       =       \033[0m
UP					=       "\033[A"
CUT					         =       "\033[K"

all:
	@make --no-print-directory -sC ./libft
	@make -s ${NAME}

${OBJ_D}:
	@mkdir -p ${OBJ_D}

${OBJECTS} : ${OBJ_D}%.o: ${SRC_D}%.c  ${HEADER} libft/libft.h Makefile libft/Makefile
	@echo "$(YELLOW)Compiling [$<]$(DEFAULT)"
	@${CC} ${FLAGS} -I $(HEADER_DIR) -c $< -o $@ 
	@printf ${UP}${CUT}

${NAME}: ${OBJ_D} ${OBJECTS} Makefile libft/libft.a
	@${CC} ${FLAGS} ${OBJECTS} -o ${NAME} -L./libft -lft
	@echo "$(GREEN)$(NAME) compiled!$(DEFAULT)"

clean:
	@make --no-print-directory clean -C ./libft
	@rm -rf ${OBJ_D} 

fclean: clean
	@make --no-print-directory fclean -C ./libft
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re