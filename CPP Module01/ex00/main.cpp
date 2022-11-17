#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);


int main()
{
	randomChump("A tiny tinny zombie");
	Zombie *zombie = newZombie("Grummmmmmmmmmmm");
	zombie->announce();
	delete zombie;
}