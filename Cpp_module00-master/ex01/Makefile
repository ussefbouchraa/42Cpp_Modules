NAME = phonebook
CC =  c++ -Wall -Wextra -Werror 
RM = rm -rf
FILE = main.cpp phonebook.cpp contact.cpp phonebook_utils.cpp
OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(OBJ) -o $@

%.o : %.cpp  "contact.hpp" 'phonebook.hpp"
	$(CC) -c $< -o $@


clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all	