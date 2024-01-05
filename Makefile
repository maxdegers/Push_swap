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

LIBFT_SOURCES = ft_isalpha.c\
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
			ft_lstmap.c

FT_PRINTF_SOURCE =	ft_printf.c\
					hexadecimal.c\
					pointer.c\
					ft_printf_utils.c

PUSH_SWAP_SOURCES =	push_swap.c\
					push_swap_utils.c

SOURCES = "${LIBFT_SOURCES} ${FT_PRINTF_SOURCE} ${PUSH_SWAP_SOURCES}"

OBJECTS = ${SOURCES:.c=.o}

HEADER_FILE =	push_swap.h\
				libft.h\
				ft_printf.h

NAME = push_swap

CC = cc

FLAGS =  -Wall -Wextra -Werror

%.o:%.c  ${HEADER_FILE}
	${CC} ${FLAGS} -c $< -o $@ -I ${HEADER_FILE}

${NAME}: ${OBJECTS} Makefile
	${CC} ${FLAGS} ${OBJECTS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJECTS} 

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re