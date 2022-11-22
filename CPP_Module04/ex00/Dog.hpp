/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:39:12 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/22 20:45:44 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);							//Canonocal form	
		~Dog();								//Canonocal form	
		Dog(const Dog &other);				//Canonocal form	
		//Dog &operator=(const Dog &other);	//Canonical form
		void makeSound() const;
		using Animal::operator=;
};

#endif
