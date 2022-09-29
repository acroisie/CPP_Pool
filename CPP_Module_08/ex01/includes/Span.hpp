/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:10:18 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/29 11:04:15 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma		once

#include	<vector> 
#include	<iostream>

class Span
{
private:
	unsigned int		_N;
public:
	std::vector<int>	array;
	Span(void);
	Span(unsigned int N);
	Span(const Span& cpy);
	~Span();

	Span& 			operator=(const Span& obj);

	void			addNumber(int numToAdd);
	void			addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);

	unsigned int	getSize(void) const;
};

std::ostream&		operator<<(std::ostream& os, Span const& obj);
