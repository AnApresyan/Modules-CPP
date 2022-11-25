#include <iostream>

bool parse(const std::string &str);

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "Wrong number of inputs\n";
    else if(!parse(argv[1]))
        std::cout << "Wrong input, try again\n";
}