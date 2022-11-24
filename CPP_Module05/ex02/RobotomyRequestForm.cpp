/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:51:42 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 12:59:18 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Empty_robotomy", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form(target, 72, 45)
{
	std::cout << "Robotomy form is created\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): Form(other) {}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy form is being destroyed\n";
}

void RobotomyRequestForm::execution_allowed(Bureaucrat const & executor) const
{
	std::cout << "Drrrrrrrrrr Drrrrrrr!!!!!" << std::endl;
	srand(time(NULL));
	if(rand() % 2)
		std::cout << this->getName() << " has been robotomized successfully 50\\% of the time" << std::endl;
	else
		std::cout << this->getName() << " faile to be robotomized." << std::endl;	
}