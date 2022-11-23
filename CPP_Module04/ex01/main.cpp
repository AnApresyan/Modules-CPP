/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:09:52 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/23 14:47:52 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	Cat kotik;
	Dog tuzik;

	kotik.makeSound();
	tuzik.makeSound();

	//kotik = tuzik;  		//should not work
	delete j; // should not create a leak
	delete i;
	return 0;
}