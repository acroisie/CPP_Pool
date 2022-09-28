/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:10:18 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/28 17:43:29 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma		once

#include	<vector> 
#include	<iostream> 

class Span
{
private:
	std::vector<int>	_array;
	unsigned int		_N;
public:
	Span(void);
	Span(unsigned int N);
	Span(const Span& cpy);
	~Span();

	Span& operator=(const Span& obj);

	void			addNumber(int numToAdd);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);

	unsigned int	getN(void) const;
};

std::ostream &operator<<(std::ostream& os, Span const& obj);
