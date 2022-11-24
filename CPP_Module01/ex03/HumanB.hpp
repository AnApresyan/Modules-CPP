/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:04:28 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 15:01:15 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *_weapon;
		const std::string _name;
	public:
		HumanB(const std::string &name);
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif