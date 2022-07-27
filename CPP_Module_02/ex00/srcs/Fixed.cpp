/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:53:08 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/27 10:29:59 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*---------------Constructor/Destructor--------------*/

Fixed::Fixed(void):_num(0){}

Fixed::Fixed(Fixed const& cpy)
{
	*this = cpy;
}

Fixed::~Fixed(){}

Fixed Fixed::operator=(Fixed const& cpy)
{
	this->_num = cpy._num;
}

int	Fixed::getRawBits(void) const
{
	return(_num);
}

void	Fixed::setRawBits(int const raw)
{
	_num = raw;
}