/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:59:40 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/27 16:01:18 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <iostream>

template <typename T> class Array
{
private:
	T*		_array;
	size_t	_size;
public:
	Array& operator=(const Array& obj)
	{
		delete[] _array;
		_array = new T[obj._size];
		_array = obj._array;
		_size = obj._size;

		return (*this);
	}

	T& operator[](size_t index)
	{
		if (index >= _size || index < 0)
			throw std::out_of_range("Array index out of range, exiting.");
		return _array[index];
	}
	
	Array(void):_array(NULL), _size(0){}
	
	Array(unsigned int n)
	{
		_array = new T[n];
		_size = (size_t)n;
	}
	
	Array(const Array& cpy)
	{
		_array = new T[cpy._size];
		*this = cpy;
	}
	
	~Array(){}

	size_t	size(void)
	{
		return (_size);
	}
};
