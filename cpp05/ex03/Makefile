CC = c++
NAME = Intern
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
HEADERS = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp \
RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
