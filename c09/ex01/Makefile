SRCS	= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
INCDIR	= includes
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= gcc
ARRC	= ar rc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:	
			${CC} ${CFLAGS} -c $^ -o ${<:.c=.o} -I${INCDIR}

${NAME}:	${OBJS}
			${ARRC} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
