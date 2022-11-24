/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:20:55 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 13:11:33 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		const std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		void signForm(Form &f);
		void executeForm(Form const & form);
	private:
		const std::string _name;
		int _grade;
		Bureaucrat();
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

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b);


#endif