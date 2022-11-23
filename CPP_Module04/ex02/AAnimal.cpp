/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:18:40 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/23 15:14:03 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Animal no arg constructor called\n";
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "Animal copy constructor called\n";
	*this = other;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called\n";	
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	this->type = other.type;
	return *this;
}

const std::string &AAnimal::getType(void) const
{
	return (this->type);
}
