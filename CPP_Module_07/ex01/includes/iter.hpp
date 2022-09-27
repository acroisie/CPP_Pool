/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 08:13:13 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/27 16:46:55 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T> void funToExec(T arg)
{
	std::cout << arg << std::endl;
}

template <typename T> void iter(T* array, size_t size, void (*funToExec)(const T&))
{
	for (size_t i = 0; i < size; i++)
	{
		funToExec(array[i]);
	}
}