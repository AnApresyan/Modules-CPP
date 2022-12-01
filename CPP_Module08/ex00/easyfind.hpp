/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:50:47 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/26 17:55:36 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
#include <iostream>
#include <algorithm>

template<typename T> typename T::iterator easyfind(T &container, int i)
{
	typename T::iterator found = std::find(container.begin(), container.end(), i);
	if (found != container.end())
		return (found);
	throw std::out_of_range("Value not found!");
} 

#endif