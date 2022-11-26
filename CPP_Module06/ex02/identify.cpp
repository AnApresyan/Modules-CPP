#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *generate(void)
{
    int i;
    i = rand() % 3;

    if (i == 0)
        return new A();
    if(i == 1)
        return new B();
    return new C();
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << 'A' << std::endl;
    if (dynamic_cast<B *>(p) != NULL) 
        std::cout << 'B' << std::endl;
    if (dynamic_cast<C *>(p) != NULL)
        std::cout << 'C' << std::endl;
}

void identify(Base &p)
{
    try
    {
        p = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        p = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        p = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e){}
    
}