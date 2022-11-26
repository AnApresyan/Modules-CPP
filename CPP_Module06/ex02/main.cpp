#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

int main()
{
     Base *base[10];
     srand(time(0));
     for (int i = 0; i < 10; i++)
     {
          base[i] = generate();
          identify(base[i]);
     }

     std::cout << std::endl;
     for (int i = 0; i < 10; i++)
     {
          identify(*base[i]);
          delete (base[i]);
     }
}