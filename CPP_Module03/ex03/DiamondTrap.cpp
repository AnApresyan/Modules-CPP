#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) 
{
    std::cout << "No arg DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name)
{
    std::cout << "DiamondTrap Constructor with an argument called\n";
	this->_energyPoints = 50;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
    std::cout << "DiamondTrap Copy constructor called\n";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DimanondTrap Name: " << this->_name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::_name << std::endl;
}