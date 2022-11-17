#include "Weapon.hpp"

int main()
{
	Weapon weapon;

	weapon.setType("gun");
	std::cout << "Weapon type: " << weapon.getType() << std::endl; 
}