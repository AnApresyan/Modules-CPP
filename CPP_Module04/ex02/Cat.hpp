/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:39:12 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/23 15:11:43 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain *_brain;
	public:
		Cat(void);							//Canonocal form	
		~Cat();								//Canonocal form	
		Cat(const Cat &other);				//Canonocal form	
		Cat &operator=(const Cat &other);
		void makeSound() const;
};

#endif
