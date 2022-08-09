/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:52:46 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/09 08:16:32 by acroisie         ###   ########lyon.fr   */
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

	Fixed&	operator=(Fixed const& obj);
	
	bool	operator>(Fixed const& obj);
	bool	operator<(Fixed const& obj);
	bool	operator>=(Fixed const& obj);
	bool	operator<=(Fixed const& obj);
	bool	operator==(Fixed const& obj);
	bool	operator!=(Fixed const& obj);
	int		operator+(Fixed const& obj);
	int		operator-(Fixed const& obj);
	int		operator*(Fixed const& obj);
	int		operator/(Fixed const& obj);

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float 	toFloat(void) const;
	int		toInt(void) const;

	static Fixed&	min(Fixed& obj1, Fixed& obj2);
	static const Fixed&	min(Fixed const& obj1, Fixed const& obj2);
	static Fixed&	max(Fixed& obj1, Fixed& obj2);
	static const Fixed&	max(Fixed const& obj1, Fixed const& obj2);
	
};

std::ostream	&operator<<(std::ostream& os, Fixed const& obj);
