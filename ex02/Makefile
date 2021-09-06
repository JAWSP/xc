# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mac <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/26 18:12:38 by mac               #+#    #+#              #
#    Updated: 2021/08/31 10:25:50 by juhpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = mutantstack.cpp main.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = Mutanted_Abomination
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
