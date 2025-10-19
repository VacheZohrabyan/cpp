NAME = main

GCC = g++

GCCFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

SOURCE = main.cpp

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