# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 11:18:06 by lmangall          #+#    #+#              #
#    Updated: 2023/01/15 20:34:37 by lmangall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memset.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_calloc.c		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strdup.c			\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strtrim.c		\
		ft_split.c			\
		ft_strjoin.c		\
		ft_substr.c			\
		ft_strncmp.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_strnstr.c		\
		ft_strmapi.c		\
		ft_striteri.c		\
		ft_atoi.c			\
		ft_itoa.c			\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		putnbr_with_itoa.c	\
		putunbr_with_itoa.c	\

SRCS_B =	ft_lstnew.c		\
		ft_lstnew.c		\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c


NAME = libft.a

OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

${NAME}: $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "Libft Done !"

all: $(NAME)

clean:
	@rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJS_B)
	@ar rc $(NAME) $(OBJS) $(OBJS_B)
	@echo "Libft Bonus Done !"

.PHONY: all clean fclean re
