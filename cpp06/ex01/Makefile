CC = c++
NAME = Serialization
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Data.cpp
HEADERS = Data.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) 

re: fclean $(NAME)
