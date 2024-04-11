
NAME = main
CC =  c++ -Wall -Wextra -Werror -std=c++98
RM = rm -rf
FILE = Animal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp WrongDog.cpp
OBJ = $(FILE:.cpp=.o)
INCLUEDES = Animal.hpp Brain.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp WrongDog.hpp
all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $@

%.o : %.cpp $(INCLUEDES)
	$(CC) -c $< -o $@ 

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all	