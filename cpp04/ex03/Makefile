CC = c++
NAME = a.out
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp MateriaSource.cpp AMateria.cpp \
Character.cpp Ice.cpp Cure.cpp
HEADERS = IMateriaSource.hpp MateriaSource.hpp AMateria.hpp \
ICharacter.hpp Character.hpp Ice.hpp Cure.hpp 

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
