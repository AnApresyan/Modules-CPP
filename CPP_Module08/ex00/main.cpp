/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:59:09 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/26 17:57:33 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> vect;
	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(30);
	vect.push_back(50);
	vect.push_back(20);
	vect.push_back(60);
	vect.push_back(70);

	std::cout << "The actual Vector: ";
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl << "iterator of easy find: ";
	for (std::vector<int>::iterator it = easyfind(vect, 20); it != vect.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::list<char> list;

	list.push_back('a');
	list.push_back('b');
	list.push_back('c');
	list.push_back('d');
	list.push_back('b');
	list.push_back('e');
	list.push_back('f');
	std::cout << "The actual list: ";
	for (std::list<char>::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl << "Iterator of easy find: ";
	for (std::list<char>::iterator it = easyfind(list, 'b'); it != list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	try
	{
		::easyfind(list, 'f');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}