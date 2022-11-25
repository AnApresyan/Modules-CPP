/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:04:32 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/25 12:45:02 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();										//Canonical form	
		ShrubberyCreationForm(const ShrubberyCreationForm &f);			//Canonical form	
	public:
		ShrubberyCreationForm(const std::string &target);
		using Form::operator=;											//Canonical form
		~ShrubberyCreationForm();										//Canonical form
		void plantShrubberies() const;
		void execution_allowed() const;
};

#endif