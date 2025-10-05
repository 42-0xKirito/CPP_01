NAME	= replace
SRC		= main.cpp
INCLUDE	= 
OBJ		= $(SRC:.cpp=.o)
CFLAGS  = -Wall -Wextra -Werror -std=c++98
CXX		= c++

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME) $(INCLUDE)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME) *.replace

re : fclean all