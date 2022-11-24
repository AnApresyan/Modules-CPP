/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:50:01 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 12:59:35 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &f);
	public:
		RobotomyRequestForm(const std::string &target);
		using Form::operator=;
		~RobotomyRequestForm();
		void execution_allowed(Bureaucrat const & executor) const;
};

#endif