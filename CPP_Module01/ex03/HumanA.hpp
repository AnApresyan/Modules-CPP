/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:04:22 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/19 11:04:23 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &_weapon;
		std::string _name;

	public:
		HumanA(const std::string &	name, Weapon &weapon);
		void attack();
};

#endif