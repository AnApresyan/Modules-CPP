/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:41:23 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/20 20:04:43 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
		ScavTrap(void);									//Canonical form
	public:
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &other);				//Canonical form
		~ScavTrap(void);								//Canonical form
		void guardGate();
		void attack(const std::string &target);
		using ClapTrap::operator=;						//Canonical form

};

#endif