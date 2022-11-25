/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:13:50 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/25 14:18:07 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern&){}

Intern &Intern::operator=(const Intern&)
{
	return (*this);
}

Intern::~Intern(){}

Form *Intern::makeRobotomyForm(const std::string &target) const
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makeShrubberyForm(const std::string &target) const
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makePresidentialForm(const std::string &target) const
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(const std::string &type, const std::string &target)
{
	int i;

	i = 0;
	bool levels[3] ={type == "robotomy request", 
					type == "shrubbery creation",
					type == "presidential pardon"};
	Form *(Intern::*funcs[])(const std::string &) const ={&Intern::makeRobotomyForm,
									&Intern::makeShrubberyForm,
									&Intern::makePresidentialForm};
	while (levels[i] != 1)
		i++;
	if (i < 3)
	{
		std::cout << "Intern creates " << target << " form\n";
		return (this->*funcs[i])(target);
	}
	std::cout << "Intern could not create a form of type " << target << std::endl;
	return NULL;
}
