CC = c++
NAME = Whatever
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
HEADERS = Whatever.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean: 
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
