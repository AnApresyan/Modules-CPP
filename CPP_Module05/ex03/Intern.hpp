/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:10:00 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/25 13:39:37 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &other);
		~Intern();
		Intern &operator=(const Intern &other);
		Form *makeForm(const std::string &type, const std::string &target);
	private: 
		Form *makeRobotomyForm(const std::string &target) const;
		Form *makeShrubberyForm(const std::string &target) const;
		Form *makePresidentialForm(const std::string &target) const;
};

#endif