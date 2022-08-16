/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:55:33 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/16 16:36:41 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

/*---------------Constructor/Destructor--------------*/

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

/*-----------------OverloadingOperator---------------*/

Brain&	Brain::operator=(const Brain& obj)
{
	int	i;

	i = 0;
	while (i++ < 100)
		_ideas[i] = obj._ideas[i];
	return (*this);
}