#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon wp_a = Weapon("gun");
	Weapon wp_b("sword");
	HumanA humanA("Anahit", wp_a);
	HumanB humanB("Lusine");
	humanB.setWeapon(wp_b);

	humanA.attack();
	humanB.attack();

	wp_a.setType("Suringan");
	humanA.attack();
	wp_b.setType("Rassengan");
	humanB.attack();
}