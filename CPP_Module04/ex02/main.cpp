/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:09:52 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 19:40:00 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	
	Cat kotik;
	Dog tuzik;

	kotik.makeSound();
	tuzik.makeSound();

	// AAnimal *cat = new Dog();
	// AAnimal *dog = new Cat();
	//AAnimal bla;			//should not work

	//kotik = tuzik;  		//should not work
	delete j; // should not create a leak
	delete i;
	return 0;
}