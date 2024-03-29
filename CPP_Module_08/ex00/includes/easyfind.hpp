/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:47:34 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/28 14:50:28 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma		once
#include	<set>
#include	<list>
#include	<vector>
#include	<iostream>
#include	<iterator>

template <typename T> 
void easyfind(T& container, int toFind)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), toFind);
    if (it != container.end())
		std::cout << "easyFind match [" << (*it) << "]" << std::endl;
    else
        throw std::exception();
}