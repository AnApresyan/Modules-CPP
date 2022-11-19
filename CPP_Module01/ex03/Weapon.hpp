/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:04:37 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/19 11:04:38 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>
class Weapon
{
	private:
		std::string _type;
	
	public:
		Weapon(const std::string &type);
		const std::string &getType() const;
		void setType(const std::string &type);
};

#endif