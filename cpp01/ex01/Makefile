CC = c++
NAME = moarbrainz
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Zombie.cpp ZombieHorde.cpp

all: $(NAME)

$(NAME): *.cpp
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
