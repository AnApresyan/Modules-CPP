NAME = Form
SRCS = $(wildcard *.cpp)
OBJS = ${SRCS:.cpp=.o}
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${OBJS} ${CFLAGS} -o ${NAME}

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o