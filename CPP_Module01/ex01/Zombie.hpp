/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:03:45 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/19 11:03:46 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		void announce( void );
		void set_name(std::string name);
		Zombie(std::string name);
		Zombie();
		~Zombie();
};


#endif
