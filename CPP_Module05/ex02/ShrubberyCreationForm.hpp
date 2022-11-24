/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:04:32 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 13:07:00 by aapresya         ###   ########.fr       */
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
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &f);
	public:
		ShrubberyCreationForm(const std::string &target);
		using Form::operator=;
		~ShrubberyCreationForm();
		void plantShrubberies() const;
		void execution_allowed(Bureaucrat const & executor) const;
};

#endif