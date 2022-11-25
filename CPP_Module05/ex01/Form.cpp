/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:28:29 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/25 12:26:46 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Empty"), _gradeToSign(1), _gradeToExec(1), _isSigned(false){}

Form::Form(const std::string &name, int toSign, int toExec): _name(name), _gradeToSign(toSign), _gradeToExec(toExec), _isSigned(false)
{
	if (toSign < 1 || toExec < 1)
		throw GradeTooHighException();
	if (toSign > 150 || toExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other): _name(other._name),_gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec), _isSigned(other._isSigned) {}

Form::~Form()
{
	std::cout << this->getName() << " got destroyed.\n";  
}

Form &Form::operator=(const Form &other)
{
	this->_isSigned = other._isSigned;
	return (*this);
}

const std::string &Form::getName() const
{
	return this->_name;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}
int Form::getGradeToExec() const
{
	return this->_gradeToExec;
}
bool Form::getIsSigned() 	const
{
	return this->_isSigned;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &o, const Form &f)
{
	o << "\nForm: " << f.getName() << std::endl;
	o << "Required Grade to Sign: " << f.getGradeToSign() << std::endl;
	o << "Required Grade to Execute: " << f.getGradeToExec() << std::endl;
	if (f.getIsSigned())
		o << "Is signed\n";
	else
		o << "Is not signed\n";
	return o;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade was too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade was too low");
}
