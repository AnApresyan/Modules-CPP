/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:46:41 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/22 19:47:17 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal no arg constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";	
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return *this;
}

const std::string &WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Some WrongAnimal sound\n";
}