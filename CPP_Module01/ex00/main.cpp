/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:49:42 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/19 09:50:01 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);


int main()
{
	randomChump("A tiny tinny zombie");
	Zombie *zombie = newZombie("Grummmmmmmmmmmm");
	zombie->announce();
	delete zombie;
}