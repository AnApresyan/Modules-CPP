/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:51:10 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 17:51:48 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap him("Monster");
    
    for (int i = 0; i < 9; i++)
        him.attack("Anahit");

    him.beRepaired(20);
    him.attack("Anahit");
    him.attack("Anahit");
    him.takeDamage(15);
    him.highFivesGuys();
    him.whoAmI();
}