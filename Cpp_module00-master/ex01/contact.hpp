# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>


class Contact 
{
    private :
    std::string index;
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string secret;
    std::string phonenumber;

    public :
    std::string get_index();
    std::string get_firstname();
    std::string get_lastname();
    std::string get_nickname();
    std::string get_secret();
    std::string get_phonenumber();  
    void set_index(std::string value);
    void set_firstname(std::string value);
    void set_lastname(std::string value);
    void set_nickname(std::string value);
    void set_secret(std::string value);
    void set_phonenumber(std::string value);
};


#endif