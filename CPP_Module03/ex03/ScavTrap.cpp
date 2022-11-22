/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:41:11 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/20 20:09:22 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "No arg ScavTrap constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
    std::cout << "ScavTrap Constructor with an argument called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap" << this->_name << " is now in Gate Keeper mode\n";
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && _hitPoints > 0)
    {    
        this->_energyPoints--;
    	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!\n";
    }
    else
        std::cout << "ScavTrap " << this->_name << " tries to attack " << target << " but doesn't have enough energypoints or hitpoints\n";
}