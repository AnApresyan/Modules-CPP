/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:28:29 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/23 20:18:31 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Empty"), _gradeToExec(1), _gradeToSign(1), _isSigned(false){}

Form::Form(const std::string &name, int toSign, int toExec): _name(name), _isSigned(false), _gradeToExec(toExec), _gradeToSign(toSign)
{
	if (toSign < 1 || toExec < 10)
		throw GradeTooHighException();
	if (toSign > 150 || toExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other): _name(other._name), _gradeToExec(other._gradeToExec), _gradeToSign(other._gradeToSign), _isSigned(other._isSigned)
{
	if (other._gradeToSign < 1 || other._gradeToExec < 10)
		throw GradeTooHighException();
	if (other._gradeToSign > 150 || other._gradeToExec > 150)
		throw GradeTooLowException();
}

Form::~Form(){}

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
	return this->_gradeToSign;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() < this->_gradeToSign)
	{
		this->_isSigned = true;
		b.signForm(*this);
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, const Form &f)
{
	o << "Form: " << f.getName() << std::endl;
	o << "Required Grade to Sign: " << f.getGradeToSign() << std::endl;
	o << "Required Grade to Execute: " << f.getGradeToExec() << std::endl;
	if (f.getIsSigned())
		o << "Is signed\n";
	else
		o << "Is not signed\n";
	return o;
}

