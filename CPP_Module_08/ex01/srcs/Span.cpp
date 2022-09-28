/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:40:40 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/28 17:14:47 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/Span.hpp"

/*---------------Constructor/Destructor--------------*/

Span::Span(void):_N(0)
{
}

Span::Span(unsigned int N)
{
	_N = N;
}

Span::Span(const Span& cpy)
{
	*this = cpy;
}

Span::~Span()
{
}

/*-----------------OverloadingOperator---------------*/

Span&	Span::operator=(const Span& obj)
{
	_array = obj._array;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, Span const& obj)
{
	os << "Array size is [" << obj.getN() << "]" << std::endl;
	return (os);
}

/*-----------------MemberFunctions------------------*/

void	Span::addNumber(int numToAdd)
{
	if (*_array.end() < _N)
		_array.push_back(numToAdd);
	else
		throw std::logic_error("Array already full.");
}

unsigned int	Span::getN(void) const
{
	return (_N);
}