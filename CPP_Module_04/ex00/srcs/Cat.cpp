/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:54 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/12 14:56:36 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

/*---------------Constructor/Destructor--------------*/

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string name)
{
	std::cout << "Cat name constructor called" << std::endl;
	_type = name;
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called" << std::endl;
}

/*-----------------OverloadingOperator---------------*/

Cat&	Cat::operator=(const Cat& obj)
{
	_type = obj._type;
	return (*this);
}

/*------------------Setters/Getters------------------*/

std::string	Cat::getType(void)
{
	return (_type);
}

/*-----------------MemberFunctions------------------*/

void	Cat::makeSound(void)
{
	std::cout << "Meow, meow!" << std::endl;
}