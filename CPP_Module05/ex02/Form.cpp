/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:28:29 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 13:33:24 by aapresya         ###   ########.fr       */
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

void Form::execute(Bureaucrat const & executor) const
{
	if (!_isSigned)
		throw FormNotSigned();
	if (executor.getGrade() < _gradeToExec)
		throw GradeTooLowException();
	execution_allowed(executor);
}

Form::GradeTooLowException::GradeTooLowException(const char *txt): _txt(txt){}

Form::GradeTooLowException::GradeTooLowException(): _txt("The grade is too low"){}

const char* Form::GradeTooLowException::what() const throw()
{
	return (this->_txt);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");	
}

const char* Form::FormNotSigned::what() const throw()
{
	return ("The form that you are trying to execute is not signed.");	
}