# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lprates <lprates@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/07 14:28:49 by bpratas           #+#    #+#              #
#    Updated: 2020/11/08 20:20:23 by lprates          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/main.c ./srcs/is_nb_valid.c ./srcs/is_dict_valid.c ./srcs/load.c ./srcs/load2.c ./srcs/is_number_possible.c ./srcs/write_nb.c ./srcs/write_nb2.c ./srcs/unload.c ./srcs/libft.c 

OBJS	= ${SRCS:.c=.o}

INCDIR  = includes

NAME	= rush-02

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $^ -o ${<:.c=.o} -I${INCDIR}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${CFLAGS}

all:		${NAME}

run:
			./${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

normH:
			norminette -R CheckDefine */*.h

normC:
			norminette -R CheckForbiddenSourceHeader */*.c

find_sources:
			find srcs -type f -name "*.c" | xargs -I{} echo ./{} | tr '\n' ' '

re:			fclean all

.PHONY:		all clean fclean re .c.o
