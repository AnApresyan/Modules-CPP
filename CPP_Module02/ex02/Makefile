NAME = FixedPoint
SRCS = $(wildcard *.cpp)
OBJS = ${SRCS:.c=.o}
CC = c++
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${OBJS} ${CFLAGS} -o ${NAME}

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o