#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "No arg FragTrap constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
    std::cout << "FragTrap Constructor with an argument called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called\n";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << ": High five guys\n";
}