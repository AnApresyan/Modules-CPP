/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:06:28 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/25 12:59:17 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other._grade;
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::increment()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade--;
	std::cout << this->_name << "'s grade was incremented by 1 and became " << this->_grade << std::endl;
}

void Bureaucrat::decrement()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade++;
	std::cout << this->_name << "'s grade was decremented by 1 and became " << this->_grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->_name << " got destroyed\n";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade was too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade was too low");
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn’t sign " << f.getName() << " because the bureaucrat's grade was not high enough." << std::endl;	
		std::cerr << e.what() << '\n';
	}
	
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << '.';
	return o;
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}