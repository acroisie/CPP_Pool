/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:59:40 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/27 17:45:06 by acroisie         ###   ########lyon.fr   */
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
		_size = obj._size;
		for (size_t i = 0; i < obj._size; i++)
		{
			_array[i] = obj._array[i];
		}

		return (*this);
	}

	T& operator[](size_t index)
	{
		if (index >= _size || index < 0)
			throw std::out_of_range("Array index out of range, exiting.");
		return _array[index];
	}

	const T& operator[](size_t index) const
	{
		if (index >= _size || index < 0)
			throw std::out_of_range("Array index out of range, exiting.");
		return _array[index];
	}
	
	Array(void):_size(0){
		_array = NULL;
	}
	
	Array(unsigned int n)
	{
		_array = new T[n];
		_size = (size_t)n;
	}
	
	Array(const Array& cpy): _size(cpy._size)
	{
		_array = new T[cpy._size];
		for (size_t i = 0; i < cpy._size; ++i) {
			_array[i] = cpy[i];
		}
	}
	
	~Array()
	{
		delete[] _array;
	}

	size_t	size(void) const
	{
		return (_size);
	}
};
