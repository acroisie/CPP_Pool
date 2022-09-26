/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:27:23 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/26 22:36:19 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

template <typename T> void swap (T& a, T& b)
{
	T c = b;
	b = a;
	a = c;
}

template <typename T> T min (T a, T b)
{
	return ((a < b) ? a : b);
}

template <typename T> T max (T a, T b)
{
	return ((a > b) ? a : b);
}