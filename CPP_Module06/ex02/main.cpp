#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
    Base *base[10];

    for (int i = 0; i < 10; i++)
    {
         base[i] = generate();
         identify(base[i]);
    }

    for (int i = 0; i < 10; i++)
    {
         identify(*base[i]);
         delete(base[i]);
    }

    
}