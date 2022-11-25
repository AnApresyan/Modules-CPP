#ifndef DATA_H
# define DATA_H

#include <string>

class Data
{
    public:
        Data(void);
        Data(Data const &other);
        ~Data(void);
        Data &operator=(Data const &other);
};

#endif