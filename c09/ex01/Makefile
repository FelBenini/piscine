# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/18 11:06:34 by fbenini-          #+#    #+#              #
#    Updated: 2025/05/18 11:38:38 by fbenini-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ${wildcard srcs/*.c}

HDRS = includes/ft.h

OBJS = ${SRCS:.c=.o}

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

srcs/%.o: srcs/%.c ${HDRS}
	${CC} ${CFLAGS} -I includes -c $< -o $@

$(NAME): $(OBJS)
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

#Directories and files are included here for demonstration purposes only.
#Moulinette will provide the actual resources and files, push only the Makefile to your repo
