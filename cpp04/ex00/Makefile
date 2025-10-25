NAME = Animal

GCC = g++

GCCFLAGS = -Wall -Wextra -Werror -std=c++98#-fsanitize=address

SOURCE = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(GCC) $(GCCFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(GCC) $(GCCFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re