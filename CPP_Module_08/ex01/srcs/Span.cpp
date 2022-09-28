/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:40:40 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/28 21:52:01 by acroisie         ###   ########lyon.fr   */
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

Span&			Span::operator=(const Span& obj)
{
	_array = obj._array;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Span const& obj)
{
	os << "Array size is [" << obj.getN() << "]" << std::endl;
	return (os);
}

/*---------------------Accessors--------------------*/

unsigned int	Span::getN(void) const
{
	return (_N);
}

/*-----------------MemberFunctions------------------*/

void			Span::addNumber(int numToAdd)
{
	if (*_array.end() < _N)
		_array.push_back(numToAdd);
	else
		throw std::logic_error("Array already full.");
}

unsigned int	Span::shortestSpan(void)
{
	if (_N < 2)
		throw std::invalid_argument("You must have a least");
	std::vector<unsigned int>::iterator it = _array.begin();
	unsigned int	tmp = 4294967295;
	std::sort(_array.begin(), _array.end());
	while (it < _array.end() - 1)
	{
		if (tmp > (*(it + 1) - *it))
			tmp = *(it + 1) - *it;
		it++;
	}
	return(tmp);
}

unsigned int	Span::longestSpan(void)
{
	if (_N < 2)
		throw std::invalid_argument("You must have a least");
	int max = *std::max_element(_array.begin(),_array.end());
	int min = *std::min_element(_array.begin(),_array.end());
	return(max - min);
}