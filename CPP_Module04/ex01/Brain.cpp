/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:01:03 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 19:31:00 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain = operator called\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;	
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called\n";
	*this = other;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}