/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 09:50:50 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/26 13:23:05 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

// class	Awesome
// {
// 	public:
// 		Awesome(void): _n(42) { return ; }
// 		int	get(void) const { return this->_n; }
// 	private:
// 		int	_n;
// };

// std::ostream	&operator<<(std::ostream &o, Awesome const &rhs)
// {
// 	o << rhs.get();
// 	return o;
// }

// template<typename T> void print(const T &x)
// {
// 	std::cout << x << std::endl;
// 	return;
// }

// int main()
// {
// 	int		tab[] = {0, 1, 2, 3, 4};
// 	Awesome	tab2[5];

// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);

// }

void printing(int &a)
{
	std::cout << a << std::endl;
}

template<typename T>
void printing(T a)
{
	std::cout << a << std::endl;
}

int main()
{
	char arr1[] = {'a', 'b', 'c', 'd', 'e'};
	int arr2[] = {1, 2, 3, 4, 5};
	
	iter(arr1, 5, printing);
	iter(arr2, 5, printing);	
}