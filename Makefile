# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 17:35:05 by aavezou           #+#    #+#              #
#    Updated: 2021/11/26 19:26:36 by aavezou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

C_FILES =	ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint \
			ft_strlen \
			ft_memset \
			ft_bzero \
			ft_memcpy \
			ft_memmove \
			ft_strlcpy \
			ft_strlcat \
			ft_toupper \
			ft_tolower \
			ft_strchr \
			ft_strrchr \
			ft_strncmp \
			ft_memchr \
			ft_memcmp \
			ft_strnstr \
			ft_atoi \
			ft_calloc \
			ft_strdup \
			ft_substr \
			ft_strjoin \
			ft_strtrim \
			ft_split \
			ft_itoa \
			ft_strmapi \
			ft_striteri \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \


CFILES = $(addsuffix .c, $(C_FILES)) 
O_FILES = $(addsuffix .o, $(C_FILES))

HDRS = libft.h

.c.o: 
	${CC} ${CFLAGS} -c -g $< -o ${<:.c=.o} 

${NAME}: ${O_FILES} 
	${AR} $@ $^

all: $(NAME)

clean:
	${RM} ${O_FILES}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re 