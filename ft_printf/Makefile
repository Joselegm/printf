# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 13:41:36 by jose-lui          #+#    #+#              #
#    Updated: 2023/12/11 14:31:12 by jose-lui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a

SRCS = ft_printf.c \
		ft_strlen.c \
		ft_putstr.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_unsigned.c \

OBJS =$(SRCS:.c=.o)

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -fr

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)
run: $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean $(Nme)

.PHONY: all clean fclean re
