/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:37:21 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/25 13:03:33 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat *b1 = new Bureaucrat("Pedro Garcia", 1);
	Bureaucrat *b2 = new Bureaucrat("Lu You", 150);
	
	try
	{
		Bureaucrat *fakeb = new Bureaucrat("Anahit Apresyan", 0);		//higher grade than the others:D
		fakeb->decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
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

	Form *f1 = new PresidentialPardonForm("esim Presidential");
	Form *f2 = new ShrubberyCreationForm("esim Shrubbery");
	Form *f3 = new RobotomyRequestForm("esim Robotomy");

	std::cout << *f1;
	std::cout << *f2;

	b1->signForm(*f1);
	b2->signForm(*f1);


	std::cout << "\n\n";

	b1->executeForm(*f1);
	b1->executeForm(*f2);
	b2->executeForm(*f3);

	
	delete f1;
	delete f2;
	delete f3;
	delete b2;
	delete b1;
}