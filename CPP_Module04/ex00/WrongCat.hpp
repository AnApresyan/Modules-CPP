/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:47:31 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 18:14:08 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:
		public:
		WrongCat(void);							//Canonocal form	
		~WrongCat();								//Canonocal form	
		WrongCat(const WrongCat &other);				//Canonocal form	
		using WrongAnimal::operator=;			//Canonocal form
		void makeSound(void) const;
};

#endif