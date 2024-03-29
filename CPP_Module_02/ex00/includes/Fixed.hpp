/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:52:46 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/28 10:41:58 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
private:
	int					_value;
	int static const	_bitsAmount = 8;

public:
	Fixed(void);
	Fixed(Fixed const& obj);
	~Fixed();

	Fixed	&operator=(Fixed const& obj);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
};
