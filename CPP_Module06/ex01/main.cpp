#include "Data.hpp"
#include "iostream"

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int main()
{
    Data *d = new Data();
    
    std::cout << "Initial address: " << d << std::endl;

    uintptr_t num = serialize(d);
    d = deserialize(num);

    std::cout << "After serialization: " << d << std::endl;
    delete d;
    
}
