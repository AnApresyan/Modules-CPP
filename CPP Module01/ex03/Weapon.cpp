#include "Weapon.hpp"

const std::string &Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}