# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mac <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 09:53:04 by mac               #+#    #+#              #
#    Updated: 2021/08/25 16:31:17 by mac              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = ez_find
CPP = clang++
CFLAGS = -Wall -Wextra -Werror
CPPCFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : ${NAME}

$(NAME) : ${OBJS}
	${CPP} ${CFLAGS} -o ${NAME} ${SRCS}
	${RM} ${OBJS}
clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all
