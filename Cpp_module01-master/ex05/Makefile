NAME = brainzz05
CC =  c++ -Wall -Wextra -Werror -std=c++98
RM = rm -rf
FILE = main.cpp Harl.cpp 
OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $@

%.o : %.cpp Harl.hpp
	$(CC) -c $< -o $@ 

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all	