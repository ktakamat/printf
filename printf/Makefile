# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: machi <machi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 01:33:05 by machi             #+#    #+#              #
#    Updated: 2023/07/04 01:33:36 by machi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRCS = ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_nbr.c \
		ft_print_unbr.c \
		ft_print_hex.c \
		ft_print_ptr.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	-rm -f $(OBJS)
fclean: clean
	-rm -f $(NAME)
re: fclean all
