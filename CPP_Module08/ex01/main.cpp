/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:13:29 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/26 17:58:34 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	srand(time(0));

	Span small(1);
	try
	{
		small.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		small.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	
	std::vector<int>	vect;
	for (int i = 0; i < 10000; i++)
		vect.push_back(rand() % 10);
	
	Span	big_span(10000);
	big_span.addNumbers(vect.begin(), vect.end());
	
	// for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
	// 	std::cout << *it << " ";
	std::cout << "\nlongest span: " << big_span.longestSpan() << std::endl;
	std::cout << "shortest span: " << big_span.shortestSpan() << std::endl;
	
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return(0);
}