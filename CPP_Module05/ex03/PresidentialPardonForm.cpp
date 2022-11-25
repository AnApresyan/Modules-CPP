/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:08:40 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/25 12:52:09 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Empty presidential form", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form(target, 25, 5)
{
	std::cout << "Presidential Pardon Form is created\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): Form(other) {}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Form is being destroyed\n";
}

void PresidentialPardonForm::execution_allowed() const
{
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}