#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	Zombie *zombies = zombieHorde(10, "Anyutchka");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete [] zombies;
}