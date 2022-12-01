/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:00:14 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/26 13:24:52 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
#include <iostream>


template<typename T> class Array
{
	private:
		unsigned int _size;
		T *_arr;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array<T> &other);
		Array &operator=(const Array<T> &other);
		T &operator[](unsigned int n);
		int size() const;
		~Array();
};

template<typename T> Array<T>::Array()
{
	_arr = new T[NULL];
	_size = 0;
}

template<typename T> Array<T>::Array(unsigned int n)
{
	_arr = new T[n];
	_size = n;
}

template<typename T> Array<T>::~Array()
{
	delete [] _arr;	
}

template<typename T> Array<T>::Array(const Array<T> &other): _size(other._size)
{
	_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		this->_arr[i] = other._arr[i];
}

template<typename T> Array<T> &Array<T>::operator=(const Array &other)
{
	if (_size > 0)
		delete [] _arr;
	this->_size = other.size();
	this->_arr = new T[this->_size];
	for (unsigned int i = 0; i < _size; i++)
		this->_arr[i] = other._arr[i];
	return *this;
}

template<typename T> T &Array<T>::operator[](unsigned int n)
{
	if (n >= _size)
		throw std::out_of_range("The index is out of range");
	return this->_arr[n];
}

template<typename T> 
int Array<T>::size() const
{
	return this->_size;
}

#endif