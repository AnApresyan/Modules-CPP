/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:09:52 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/22 20:50:35 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal *meta = new Animal();
	// const Animal *j = new Dog();
	// const Animal *i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); // will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// const WrongAnimal *wrong = new WrongCat();
	// std::cout << wrong->getType() << " " << std::endl;
	// wrong->makeSound();

	Cat *katynonok = new Cat();
	Dog *bob = new Dog();
	Dog *Marley = new Dog();

	*bob = *katynonok;
	std::cout << "\n\n\nBob type: " << bob->getType() << ", Bob makes sound: " << std::endl;
	bob->makeSound();
	std::cout << std::endl << std::endl << std::endl;
	//katynonok = bob;
	
}