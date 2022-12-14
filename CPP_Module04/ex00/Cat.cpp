/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:51:30 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/23 14:08:12 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat no arg constructor called\n";
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called\n";
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Meeeeeeeeeeeoooooooooowwww\n";
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return *this;
}

