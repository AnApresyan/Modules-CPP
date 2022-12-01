/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 09:35:55 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/26 09:44:05 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template<typename T>
void swap(T &t1, T &t2)
{
	T t;
	t = t1;
	t1 = t2;
	t2 = t;
}

template<typename T>
T &min(T &t1, T &t2)
{
	return (t1 < t2 ? t1 : t2);
}

template<typename T>
T &max(T &t1, T &t2)
{
	return (t1 > t2 ? t1 : t2);
}

#endif