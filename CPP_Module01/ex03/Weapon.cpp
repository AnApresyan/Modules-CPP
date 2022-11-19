/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:04:35 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/19 11:04:36 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->_type = type;
}
const std::string &Weapon::getType() const
{
	return this->_type;
}

void Weapon::setType(const std::string &type)
{
	this->_type = type;
}