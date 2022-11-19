NAME = Karen
SRCS = $(wildcard *.cpp)
OBJS = ${SRCS:.cpp=.o}
CC = c++
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${OBJS} ${CFLAGS} -o ${NAME}

clean :
	@rm -rf *.o
	@rm -rf $(wildcard *.replace)

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o