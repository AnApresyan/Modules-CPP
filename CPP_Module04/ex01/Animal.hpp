/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:11:46 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/23 14:24:13 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);								//Canonical form
		virtual ~Animal();							//Canonical form
		Animal(const Animal &other);				//Canonical form
		Animal &operator=(const Animal &other);		//Canonical form
		const std::string &getType() const;
		virtual void makeSound() const;
};

#endif