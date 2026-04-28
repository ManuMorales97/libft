# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/24 13:26:52 by manmoral          #+#    #+#              #
#    Updated: 2026/04/24 15:52:50 by manmoral         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_memchr.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
all: $(NAME)
$(OBJS): $(HEADER)
$(NAME): $(OBJS)
	   $(AR) $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
so: $(OBJS)
	$(CC) -nostartfiles -fPIC $(CFLAGS) -shared -o libft.so $(OBJS)
.PHONY: all clean fclean re