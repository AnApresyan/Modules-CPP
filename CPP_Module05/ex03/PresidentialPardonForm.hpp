/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:24:04 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/25 12:44:48 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &f);
	public:
		PresidentialPardonForm(const std::string &target);
		using Form::operator=;
		~PresidentialPardonForm();
		void execution_allowed() const;
};

#endif