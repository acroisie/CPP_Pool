/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:17:32 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/29 11:54:27 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma		once
#include	<iostream>
#include	<stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void){};
	MutantStack(const MutantStack& cpy){
		this->c = cpy.c
		*this = cpy;}
	~MutantStack(){};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

	MutantStack<T>& operator=(const MutantStack<T>& obj) 
	{
		this->c = obj.c;
		return *this;
	}
};
