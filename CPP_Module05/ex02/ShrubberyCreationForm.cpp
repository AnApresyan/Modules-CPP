/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:15:10 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 13:06:55 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Empty_shrubbery", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form(target, 145, 137)
{
	std::cout << "ShrubberyForm is created\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): Form(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery is being destroyed\n";
}

void ShrubberyCreationForm::plantShrubberies() const
{
	std::ofstream trees;
	
	trees.open(this->getName() + "_shrubbery");
	if (trees.is_open())
	{	
		trees << "               ,@@@@@@@,						 " << std::endl;	
		trees << "      ,,,.   ,@@@@@@/@@,  .oo8888o.			 " << std::endl;		
		trees << "    ,&\\%\\%&%&&%,@@@@@/@@@@@@,8888\\88/8o	 " << std::endl;
		trees << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		 " << std::endl;	
		trees << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'		 " << std::endl;	
		trees << "   %&&%/ %&\\%\\%&&@@\\ V /@@' `88\\8 `/88'	 " << std::endl;
		trees << "   `&%\\ ` /%&'    |.|        \\ '|8'			 " << std::endl;	
		trees << "       |o|        | |         | |				 " << std::endl;
		trees << "       |.|        | |         | |				 " << std::endl;
		trees << " .   \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_	 " << std::endl;
	}
	trees.close();
}

void ShrubberyCreationForm::execution_allowed(Bureaucrat const & executor) const
{
	for (int i = 0; i < 5; i++)
		plantShrubberies();
}
