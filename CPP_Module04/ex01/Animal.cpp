/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:18:40 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/22 18:32:21 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal no arg constructor called\n";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called\n";
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";	
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return *this;
}

const std::string &Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Some Animal sound\n";
}