/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:33:57 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/26 17:59:23 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\n\nLIST\n\n" << std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << list.back() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);
	std::list<int>::iterator itl = list.begin();
	std::list<int>::iterator itel = list.end();
	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	

	std::cout << "\n\nDOUBLE\n\n";
	MutantStack<double> mystack;
	mystack.push(5);
	mystack.push(17);
	std::cout << mystack.top() << std::endl;
	mystack.pop();
	std::cout << mystack.size() << std::endl;
	mystack.push(3);
	mystack.push(5);
	mystack.push(737);
	//[...]
	mystack.push(0);

	MutantStack<double>::iterator itd = mystack.begin();
	MutantStack<double>::iterator ited = mystack.end();
	
	++itd;
	--itd;
	while (itd != ited)
	{
		std::cout << *itd << std::endl;
		++itd;
	}
	
	return 0;
}