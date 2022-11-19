#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &_weapon;
		std::string _name;

	public:
		HumanA(const std::string &	name, Weapon &weapon);
		void attack();
};

#endif