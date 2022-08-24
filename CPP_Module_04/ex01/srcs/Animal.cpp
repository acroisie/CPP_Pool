/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:54 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/24 15:16:31 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

/*---------------Constructor/Destructor--------------*/

Animal::Animal(void):_type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

/*-----------------OverloadingOperator---------------*/

Animal&	Animal::operator=(const Animal& obj)
{
	_type = obj._type;
	return (*this);
}

/*------------------Setters/Getters------------------*/

std::string	Animal::getType(void) const
{
	return (_type);
}

/*-----------------MemberFunctions------------------*/

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes a noise!" << std::endl;
}