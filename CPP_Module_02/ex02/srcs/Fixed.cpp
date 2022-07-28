/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:53:08 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/28 12:16:25 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*---------------Constructor/Destructor--------------*/

Fixed::Fixed(void):_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(int const numToConvert)
{
	std::cout << "Int constructor called" << std::endl;
	_value = numToConvert << _bitsAmount;
}

Fixed::Fixed(float const numToConvert)
{
	std::cout << "Float constructor called" << std::endl;
	_value = numToConvert * (float) (1 << _bitsAmount);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*-----------------OverloadingOperator---------------*/

Fixed &Fixed::operator=(Fixed const& cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = cpy._value;
	return (*this);
}

std::ostream	&operator<<(std::ostream& os, Fixed const& obj)
{
    os << obj.toFloat();
    return os;
}

/*---------------------Accessors--------------------*/

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

/*-----------------MemberFunctions------------------*/

float 	Fixed::toFloat(void) const
{
	float	convertedFixed;

	convertedFixed = _value >> _bitsAmount;
	return (_value / (float) (1 << this->_bitsAmount));
}

int		Fixed::toInt(void) const
{
	int	convertedFixed;

	convertedFixed = _value >> _bitsAmount;
	return (convertedFixed);
}
