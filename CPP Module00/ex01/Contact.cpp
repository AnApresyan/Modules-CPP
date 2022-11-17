/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <aapresya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:37:15 by aapresya          #+#    #+#             */
/*   Updated: 2022/10/15 12:47:17 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

void Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void Contact::set_secret(std::string str)
{
	this->darkest_secret = str;
}

const std::string &Contact::get_first_name()
{
	return (this->first_name);
}

const std::string &Contact::get_last_name()
{
	return (this->last_name);
}

const std::string &Contact::get_nickname()
{
	return (this->nickname);
}

const std::string &Contact::get_phone_number()
{
	return (this->phone_number);
}

const std::string &Contact::get_secret()
{
	return (this->darkest_secret);
}

Contact::Contact(std::string f, std::string l, std::string p, std::string n, std::string s)
{
	set_first_name(f);
	set_last_name(l);
	set_phone_number(p);
	set_nickname(n);
	set_secret(s);
}

Contact::Contact(void)
{
}