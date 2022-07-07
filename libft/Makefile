# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 16:23:16 by lsalin            #+#    #+#              #
#    Updated: 2022/07/04 16:04:38 by lsalin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_memset.c \
    ft_bzero.c \
    ft_strlen.c \
    ft_isalpha.c \
    ft_isdigit.c \
    ft_isalnum.c \
    ft_isascii.c \
    ft_isprint.c \
    ft_toupper.c \
    ft_tolower.c \
    ft_strchr.c \
    ft_strrchr.c \
    ft_memcpy.c \
    ft_memmove.c \
    ft_memchr.c \
    ft_memcmp.c \
    ft_strncmp.c \
    ft_strlcat.c \
    ft_strlcpy.c \
    ft_strnstr.c \
    ft_strdup.c \
    ft_calloc.c \
	ft_strjoin.c \
	ft_substr.c \
    ft_atoi.c \
	ft_strtrim.c \
    ft_split.c \
    ft_itoa.c \
    ft_strmapi.c \
    ft_striteri.c \
    ft_putchar_fd.c \
    ft_putstr_fd.c \
    ft_putendl_fd.c \
    ft_putnbr_fd.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o: %.c
	@echo "\033[0;33mGenerating obj..."
	$(CC) -c $(CFLAGS) $^
	@echo "\033[0m"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
