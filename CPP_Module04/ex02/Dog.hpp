/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:39:12 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/23 15:11:40 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain *_brain;
	public:
		Dog(void);							//Canonocal form	
		~Dog();								//Canonocal form	
		Dog(const Dog &other);				//Canonocal form	
		Dog &operator=(const Dog &other);	//Canonocal form
		void makeSound() const;
};

#endif
