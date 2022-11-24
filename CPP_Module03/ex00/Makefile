NAME = ClapTrap
SRCS = $(wildcard *.cpp)
OBJS = ${SRCS:.cpp=.o}
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${OBJS} ${CXXLAGS} -o ${NAME}

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o