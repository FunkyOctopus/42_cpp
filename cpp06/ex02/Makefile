CC = C++
NAME = Identify
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Base.cpp
HEADERS = Base.hpp A.hpp B.hpp C.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
