/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <aapresya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:09:36 by aapresya          #+#    #+#             */
/*   Updated: 2022/10/15 12:06:32 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void corr_width(std::string str)
{
	if (str.length() <= 10)
	{
		int spaces = 10 - str.length();
		while (spaces--)
			std::cout << " ";
		std::cout << str;
	}
	else
		std::cout << str.substr(0, 9) << ".";
}

std::string PhoneBook::read_input(std::string text)
{
	std::string holder;

	while (holder.empty())
	{
		std::cout << text;
		std::getline(std::cin, holder);
	}
	return (holder);
}

void PhoneBook::add()
{
	std::string f_name;
	std::string l_name;
	std::string phone;
	std::string nickname;
	std::string secret;

	_contacts[_current].set_first_name(read_input("First Name: "));
	_contacts[_current].set_last_name(read_input("Last Name: "));
	_contacts[_current].set_nickname(read_input("Nickname: "));
	_contacts[_current].set_phone_number(read_input("Phone Number: "));
	_contacts[_current].set_secret(read_input("Darkest Secret: "));
	_current = (_current + 1) % 8;
	if (this->_size < 8)
		this->_size++;
}

void PhoneBook::display() 
{
	for (int i = 0; i < _size; i++)
	{
		std::cout << "         " << i + 1 << "|";
		corr_width(_contacts[i].get_first_name());
		std::cout << "|";
		corr_width(_contacts[i].get_last_name());
		std::cout << "|";
		corr_width(_contacts[i].get_nickname());
		std::cout << std::endl;
	}
}

void PhoneBook::search(int i)
{
	if (i > 0 && i <= _size) 
	{
		std::cout << "First name:     " << _contacts[i-1].get_first_name() << std::endl;
		std::cout << "Last name:      " << _contacts[i-1].get_last_name() << std::endl;
		std::cout << "Nickname:       " << _contacts[i-1].get_nickname() << std::endl;
		std::cout << "Phone Number:   " << _contacts[i-1].get_phone_number() << std::endl;
		std::cout << "Darkest Secret: " << _contacts[i-1].get_secret() << std::endl;
	}
}

int PhoneBook::get_size() const
{
	return (this->_size);
}

PhoneBook::PhoneBook(void) : _size(0), _current(0) {}