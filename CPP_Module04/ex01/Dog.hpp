/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:39:12 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/22 20:11:57 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog(void);							//Canonocal form	
		~Dog();								//Canonocal form	
		Dog(const Dog &other);				//Canonocal form	
		using Animal::operator=;			//Canonocal form
		void makeSound() const;
};

#endif
