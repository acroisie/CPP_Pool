/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:52:46 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/09 08:15:12 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <cmath>

class Fixed
{
private:
	int					_value;
	int static const	_bitsAmount = 8;

public:
	Fixed(void);
	Fixed(Fixed const& obj);
	Fixed(int const numToConvert);
	Fixed(float const numToConvert);
	~Fixed();

	Fixed	&operator=(Fixed const& obj);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float 	toFloat(void) const;
	int		toInt(void) const;
	
};

std::ostream	&operator<<(std::ostream& os, Fixed const& obj);
