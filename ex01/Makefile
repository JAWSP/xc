# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mac <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 17:15:40 by mac               #+#    #+#              #
#    Updated: 2021/08/25 17:15:54 by mac              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = span.cpp main.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = Span
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
