# ifndef PHONEBOOK
# define PHONEBOOK

#include <iostream>
#include "contact.hpp"

class PhoneBook
{
    public :
        Contact contact[8];

    void ADD(int index);
    void SEARCH();
    void EXIT();
};

bool valid_data(Contact &contact);
int is_digit(const std::string &value);
bool is_empty(Contact &contact);
void print_list(Contact &contact);

#endif