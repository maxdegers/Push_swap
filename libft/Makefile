# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 14:24:49 by mpitot            #+#    #+#              #
#    Updated: 2024/03/08 13:12:54 by mbrousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c\
			ft_printf.c\
			hexadecimal.c\
			pointer.c\
			ft_printf_utils.c

OBJS	=	${SRCS:%.c=${OBJ_D}%.o}

SRC_D	=	srcs/

OBJ_D	=	.objs/

HEAD	=   ./includes

HEADER  =   $(HEAD)/libft.h

NAME	=	libft.a

CC		=	cc

AR		=	ar -rc

FLAGS	=	-Wall -Wextra -Werror -I${HEAD}

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

all		:	${NAME}

${OBJS}	:	${OBJ_D}%.o	:	${SRC_D}%.c ${HEADER}
	@$(call update_progress,$<)
	@${CC} ${FLAGS} -c $< -o $@

${NAME}	:	${OBJ_D} ${OBJS} Makefile
	@${AR} ${NAME} ${OBJS}
	@$(eval CHANGED=1)
	@echo "$(WHITE)<$(GREEN)100%$(WHITE)> $(WHITE)[$(CYAN)$(NAME)$(WHITE)] $(GREEN)compiled.$(DEFAULT)"

${OBJ_D}:
	@mkdir -p ${OBJ_D}

clean	:
	@rm -rf ${OBJ_D}
	@echo "$(WHITE)[$(RED)$(OBJ_D)$(WHITE)] $(RED)deleted.$(DEFAULT)"

fclean	:	clean
	@rm -f ${NAME}
	@echo "$(WHITE)[$(RED)$(NAME)$(WHITE)] $(RED)deleted.$(DEFAULT)"

re		:	fclean all

.PHONY	:	all clean fclean re

.NOTPARALLEL all:
	@if [ $(CHANGED) -eq 0 ]; then \
		echo "$(YELLOW)Nothing to be done for $(WHITE)[$(CYAN)$(NAME)$(WHITE)].$(DEFAULT)"; \
	fi