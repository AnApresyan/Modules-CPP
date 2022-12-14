/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:51:10 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/22 17:02:10 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap him("Monster");
    
    for (int i = 0; i < 9; i++)
        him.attack("Anahit");

    him.beRepaired(20);
    him.attack("Anahit");
    him.attack("Anahit");
    him.takeDamage(1000000);
    him.highFivesGuys();
}