/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:53:08 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/09 08:17:33 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*---------------Constructor/Destructor--------------*/

Fixed::Fixed(void):_value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& cpy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(int const numToConvert)
{
	// std::cout << "Int constructor called" << std::endl;
	_value = numToConvert << _bitsAmount;
}

Fixed::Fixed(float const numToConvert)
{
	// std::cout << "Float constructor called" << std::endl;
	_value = roundf(numToConvert * (float) (1 << _bitsAmount));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

/*-----------------OverloadingOperator---------------*/

Fixed&	Fixed::operator=(Fixed const& cpy)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	_value = cpy._value;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Fixed const& obj)
{
    os << obj.toFloat();
    return (os);
}

bool	Fixed::operator>(Fixed const& obj)
{
	return (_value > obj._value);
}

bool	Fixed::operator<(Fixed const& obj)
{
	return (_value < obj._value);
}

bool	Fixed::operator>=(Fixed const& obj)
{
	return (_value >= obj._value);
}

bool	Fixed::operator<=(Fixed const& obj)
{
	return (_value <= obj._value);
}

bool	Fixed::operator==(Fixed const& obj)
{
	return (_value == obj._value);
}

bool	Fixed::operator!=(Fixed const& obj)
{
	return (_value == obj._value);
}

int	Fixed::operator+(Fixed const& obj)
{
	return (_value + obj._value);
}

int	Fixed::operator-(Fixed const& obj)
{
	return (_value - obj._value);
}

int	Fixed::operator*(Fixed const& obj)
{
	return (_value * obj._value);
}

int	Fixed::operator/(Fixed const& obj)
{
	return (_value / obj._value);
}

Fixed&	Fixed::operator++(void)
{
	_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	cpy = *this;
	_value++;
	return (cpy);
}

Fixed&	Fixed::operator--(void)
{
	_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	cpy = *this;
	_value--;
	return (cpy);
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
	return (_value / (float) (1 << this->_bitsAmount));
}

int		Fixed::toInt(void) const
{
	int	convertedFixed;

	convertedFixed = _value >> _bitsAmount;
	return (convertedFixed);
}

Fixed&	Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1 >= obj2)
		return (obj2);
	return (obj1);
}

const Fixed&	Fixed::min(Fixed const& obj1, Fixed const& obj2)
{
	if ((Fixed)obj1 >= obj2)
		return (obj2);
	return (obj1);
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1 <= obj2)
		return (obj2);
	return (obj1);
}

const Fixed&	Fixed::max(Fixed const& obj1, Fixed const& obj2)
{
	if ((Fixed)obj1 <= obj2)
		return (obj2);
	return (obj1);
}
