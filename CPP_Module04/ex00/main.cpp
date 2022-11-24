/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:09:52 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 18:17:16 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *wrong = new WrongCat();
	std::cout << "Type: " << wrong->getType() << " " << std::endl;
	wrong->makeSound();

	const WrongCat *wrongCat = new WrongCat();
	std::cout << "Type: " << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	
	//Cat *katyonok = new Cat();
	Dog *bob = new Dog();
	//Dog *Marley = new Dog();

	std::cout << "\n\n\nBob type: " << bob->getType() << ", Bob makes sound: " << std::endl;
	bob->makeSound();
	std::cout << std::endl << std::endl << std::endl;
	
}