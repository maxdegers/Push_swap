# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:52:23 by mbrousse          #+#    #+#              #
#    Updated: 2024/03/13 16:26:50 by mbrousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	push_swap.c\
			push_swap_utils.c\
			error.c\
			node_utils.c\
			swap.c\
			push.c\
			rotate.c\
			reverce_rotate.c\
			solve.c

OBJS	=	$(SRCS:%.c=${OBJ_D}%.o)

SRC_D	=	src/

OBJ_D	=	.obj/

HEADER_DIR      =       ./includes

HEADER  =       $(HEADER_DIR)/push_swap.h

NAME	=	push_swap

CC		=	cc

FLAGS	=	-Wall -Wextra -Werror

RED		=	\033[1;31m
GREEN	=	\033[1;32m
YELLOW	=	\033[1;33m
BLUE	=	\033[1;34m
MAGENTA	=	\033[1;35m
CYAN	=	\033[1;36m
WHITE	=	\033[1;37m
DEFAULT	=	\033[0m
UP		=	"\033[A"
CUT		=	"\033[K"

CHANGED	=	0

NUM_SRCS := $(words $(SRCS) + 1)
COMPILED_SRCS := 0

define erase_lines
	@for i in $$(seq $(COMPILED_SRCS)); do \
		printf ${UP}${CUT}; \
	done
endef

define separator
	@echo "$(WHITE)------------------------------------------------------------$(DEFAULT)"
endef

define update_progress
	$(eval COMPILED_SRCS := $(shell echo $$(($(COMPILED_SRCS) + 1))))
	$(eval PROGRESS := $(shell echo $$((($(COMPILED_SRCS) * 100) / $(NUM_SRCS)))))
	@if [ $(PROGRESS) -eq 100 ]; then \
		echo "$(WHITE)<$(GREEN)$(PROGRESS)%$(WHITE)> $(WHITE)[$(BLUE)$1$(WHITE)] $(YELLOW)compiled.$(DEFAULT)\r"; \
	else \
		if [ $(PROGRESS) -lt 10 ]; then \
			echo "$(WHITE)<  $(GREEN)$(PROGRESS)%$(WHITE)> $(WHITE)[$(BLUE)$1$(WHITE)] $(YELLOW)compiled.$(DEFAULT)\r"; \
		else \
			echo "$(WHITE)< $(GREEN)$(PROGRESS)%$(WHITE)> $(WHITE)[$(BLUE)$1$(WHITE)] $(YELLOW)compiled.$(DEFAULT)\r"; \
		fi \
	fi
endef

all		:	libft ${NAME}

${OBJS}	:	${OBJ_D}%.o: ${SRC_D}%.c includes/push_swap.h
	@$(call update_progress,$<)
	@${CC} ${FLAGS} -I ${HEADER_DIR} -c $< -o $@

${NAME}	:	${OBJ_D} ${OBJS} Makefile libft/libft.a
	@${CC} ${FLAGS} ${OBJS} -o ${NAME}  -L./libft -lft
	@$(eval CHANGED=1)
	@echo "$(WHITE)<$(GREEN)100%$(WHITE)> $(WHITE)[$(CYAN)$(NAME)$(WHITE)] $(GREEN)compiled.$(DEFAULT)"

${OBJ_D}:
	@mkdir -p ${OBJ_D}

libft	:
	@make --no-print-directory -C ./libft
	@echo "$(WHITE)------------------------------------------------------------$(DEFAULT)"

clean	:
	@echo "Cleaning $(WHITE)[$(RED)libft$(WHITE)]...$(DEFAULT)"
	@make --no-print-directory -C ./libft clean
	@echo "$(WHITE)------------------------------------------------------------$(DEFAULT)"
	@echo "Cleaning $(WHITE)[$(RED)$(NAME)$(WHITE)]...$(DEFAULT)"
	@rm -rf ${OBJ_D}
	@echo "$(WHITE)[$(RED)$(OBJ_D)$(WHITE)] $(RED)deleted.$(DEFAULT)"

fclean	:
	@echo "F***ing-Cleaning $(WHITE)[$(RED)libft$(WHITE)]...$(DEFAULT)"
	@make --no-print-directory -C ./libft fclean
	@echo "$(WHITE)------------------------------------------------------------$(DEFAULT)"
	@echo "F***ing-Cleaning $(WHITE)[$(RED)$(NAME)$(WHITE)]...$(DEFAULT)"
	@rm -rf ${OBJ_D}
	@echo "$(WHITE)[$(RED)$(OBJ_D)$(WHITE)] $(RED)deleted.$(DEFAULT)"
	@rm -f ${NAME}
	@echo "$(WHITE)[$(RED)$(NAME)$(WHITE)] $(RED)deleted.$(DEFAULT)"

re		:	fclean .internal_separate all

leaks	:	all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY	:	all clean fclean re libft leaks

.NOTPARALLEL all:
	@if [ $(CHANGED) -eq 0 ]; then \
		echo "$(YELLOW)Nothing to be done for $(WHITE)[$(CYAN)$(NAME)$(WHITE)].$(DEFAULT)"; \
	fi

.internal_separate	:
	@echo "$(WHITE)------------------------------------------------------------$(DEFAULT)"