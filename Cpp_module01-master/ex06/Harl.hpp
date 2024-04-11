#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
   
public:

    void harlFilter(const char *level);
};


#endif