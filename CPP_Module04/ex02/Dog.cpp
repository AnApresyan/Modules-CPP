/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:51:30 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/23 14:30:34 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog no arg constructor called\n";
	this->_brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called\n";
	*this = other;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "woof-woof; ruff!!! ruff!!!\n";
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.getType();
	this->_brain = other._brain;
	return *this;
}