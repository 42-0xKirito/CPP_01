NAME	= Zombie
SRC		= main.cpp Zombie.cpp zombieHorde.cpp
INCLUDE	= Zombie.hpp
OBJ		= $(SRC:.cpp=.o)
CFLAGS  = -Wall -Wextra -Werror -std=c++98
CXX		= c++

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME) $(INCLUDE)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all