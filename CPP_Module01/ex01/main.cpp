/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:03:25 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/19 11:03:26 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	Zombie *zombies = zombieHorde(10, "Anyutchka");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete [] zombies;
}