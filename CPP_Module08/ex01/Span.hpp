/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:10:41 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/26 16:42:29 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int> vector;
	public:
		Span(unsigned int N);
		Span();
		~Span(void);
		Span(const Span &other);
		Span &operator=(const Span &other);
		void addNumber(int num);
		int shortestSpan() const;
		int longestSpan() const;
		template<class InputIterator> void addNumbers(InputIterator first, InputIterator last)
		{
			while (first != last)
				addNumber(*(first++));
		}		
};

#endif