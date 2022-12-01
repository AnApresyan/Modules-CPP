/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 09:47:24 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/26 13:21:45 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T *arr, int n, void func(const T &))
{
	for (int i = 0; i < n; i++)
		func(arr[i]);
}

#endif