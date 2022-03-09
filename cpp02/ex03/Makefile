CC = c++
NAME = BSP
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Fixed.cpp Point.cpp
HEADER = Fixed.hpp Point.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
