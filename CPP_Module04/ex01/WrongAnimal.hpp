/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:43:54 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/22 19:44:43 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);								//Canonical form
		~WrongAnimal();									//Canonical form
		WrongAnimal(const WrongAnimal &other);				//Canonical form
		WrongAnimal &operator=(const WrongAnimal &other);		//Canonical form
		const std::string &getType() const;
		virtual void makeSound() const;
};

#endif