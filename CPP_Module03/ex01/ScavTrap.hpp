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

class ScavTrap: public ClapTrap
{
	private:
		bool gateKeeper;
		ScavTrap(void);
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ClapTrap &operator=(ClapTrap const &other);
		void guardGate();
		void attack(const std::string &target);
};

#endif