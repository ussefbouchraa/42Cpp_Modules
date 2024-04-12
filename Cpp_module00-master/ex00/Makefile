NAME = megaphone
CC =  c++ -Wall -Wextra -Werror 
RM = rm -rf
FILE = megaphone.cpp
OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $< -o $@

%.o : %.cpp
	$(CC) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all