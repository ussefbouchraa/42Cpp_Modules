NAME = brainzz04
CC =  c++ -Wall -Wextra -Werror -std=c++98
RM = rm -rf
FILE = main.cpp utils.cpp 
OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $@

%.o : %.cpp losers.hpp
	$(CC) -c $< -o $@ 

clean :
	$(RM) $(OBJ) newfile.replace

fclean : clean
	$(RM) $(NAME)

re : fclean all
