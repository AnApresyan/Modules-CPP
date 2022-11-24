/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:04:30 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 16:38:59 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon wp_a = Weapon("gun");
	Weapon wp_b("sword");
	HumanA humanA("Anahit", wp_a);
	HumanB humanB("Lusine");
	humanB.setWeapon(wp_b);

	humanA.attack();
	humanB.attack();

	wp_a.setType("Suringan");
	humanA.attack();
	wp_b.setType("Rassengan");
	humanB.attack();

	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}