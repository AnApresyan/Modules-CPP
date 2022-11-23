/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:37:21 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/23 18:57:53 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *b1 = new Bureaucrat("Pedro Garcia", 1);
	Bureaucrat *b2 = new Bureaucrat("Lu You", 150);
	try
	{
		Bureaucrat *fakeb = new Bureaucrat("Anahit Apresyan", 0);		//higher grade than the others:D
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		b2->increment();
		b1->decrement();
		b1->increment();
		b1->increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << *b1 << std::endl;
	std::cout << *b2 << std::endl;
}