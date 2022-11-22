/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:50:29 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/22 19:51:08 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat no arg constructor called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat copy constructor called\n";
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

