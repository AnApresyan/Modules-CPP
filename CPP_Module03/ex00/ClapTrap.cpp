/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:14:03 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/20 19:40:05 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "No arg constructor called\n";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string const &name)
{
    *this = ClapTrap();
    _name = name;
    std::cout << "Constructor with an argument called\n";
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
    std::cout << "Copy constructor called\n";
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;

    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 && _hitPoints > 0)
    {    
        this->_energyPoints--;
    	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!\n";
    }
    else
        std::cout << "ClapTrap " << this->_name << " tries to attack " << target << " but doesn't have enough energypoints or hitpoints\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " is attacked losing " << amount << " points\n";
    if (_hitPoints - amount > 0)
		this->_hitPoints-=10;
	else
		this->_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && _hitPoints > 0)
    {
		this->_energyPoints--;
		this->_hitPoints += amount;
	    std::cout << "ClapTrap " << this->_name << " repairs itself by " << amount << " points\n";
	}
    else
        std::cout << "ClapTrap " << this->_name << " tries to repair himself but doesn't have enough energypoints or hitpoints\n";
}

