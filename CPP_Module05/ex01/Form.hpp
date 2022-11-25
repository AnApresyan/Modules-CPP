/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:59:49 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/25 11:42:17 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	public:
		Form(const std::string &name, int toSign, int toExec);	
		Form(const Form &other);								//Canonical form
		Form &operator=(const Form &other);						//Canonical form
		~Form();												//Canonical form
		const std::string &getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getIsSigned() 	const;
		void beSigned(Bureaucrat &b);
	private:
		const std::string _name;
		const int _gradeToSign;
		const int _gradeToExec;
		bool _isSigned;
		Form();													//Canonical form
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		}; 
};

std::ostream &operator<<(std::ostream &o, const Form &f);

#include "Bureaucrat.hpp"
#endif