/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:25:08 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/26 16:42:33 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	vector.reserve(0);
}

Span::Span(unsigned int N)
{
	vector.reserve(N);
}

Span::~Span(){}

Span::Span(const Span &other)
{
	this->vector.reserve(other.vector.capacity());
	this->vector = other.vector;
}

Span &Span::operator=(const Span &other)
{
	this->vector.reserve(other.vector.capacity());
	this->vector = other.vector;
	return *this;
}

void Span::addNumber(int num)
{
	if (this->vector.size() == this->vector.capacity())
		throw std::exception();
	vector.push_back(num);
	std::sort(vector.begin(), vector.end());
}

int Span::shortestSpan() const
{
	if (vector.size() <= 1)
		throw std::exception();
	int shortest = vector[1] - vector[0];
	for (unsigned int i = 2; i < vector.size(); i++)
		if (vector[i] - vector[i - 1] < shortest)
			shortest = vector[i] - vector[i - 1];
	return shortest;
}

int Span::longestSpan() const
{
	if (this->vector.size() <= 1)
		throw std::exception();
	return vector[vector.size() - 1] - vector[0];
}