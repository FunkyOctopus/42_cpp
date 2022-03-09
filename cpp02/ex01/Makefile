CC = c++
NAME = a.out
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Fixed.cpp

all: $(NAME)

$(NAME): *.cpp
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
