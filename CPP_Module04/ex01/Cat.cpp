/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:51:30 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/22 20:20:53 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat no arg constructor called\n";
	_brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called\n";
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.getType();
	this->_brain = other._brain;
	return 
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Meeeeeeeeeeeoooooooooowwww\n";
	delete _brain;
}

