CC = c++
NAME = BraiiiiiiinnnzzzZ
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all: $(NAME)

$(NAME): *.cpp
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
