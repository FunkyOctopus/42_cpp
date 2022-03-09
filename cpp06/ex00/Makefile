CC = c++
NAME = convert
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Convert.cpp
HEADERS = Convert.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean: 
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
