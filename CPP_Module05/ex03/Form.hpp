/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:59:49 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/25 12:44:30 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	protected:
		Form(const std::string &name, int toSign, int toExec);	
		Form(const Form &other);										//Canonical form
		virtual void execution_allowed() const = 0;	
	public:
		Form &operator=(const Form &other);								//Canonical form
		virtual ~Form();												//Canonical form
		const std::string &getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getIsSigned() 	const;
		void beSigned(Bureaucrat &b);
		void execute(Bureaucrat const & executor) const;
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
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			private:
				const char *_txt; 
			public:
				GradeTooLowException();
				GradeTooLowException(const char *txt);
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, const Form &f);

#include "Bureaucrat.hpp"
#endif