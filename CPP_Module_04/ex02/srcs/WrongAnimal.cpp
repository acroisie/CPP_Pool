/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:54 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/12 15:51:07 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

/*---------------Constructor/Destructor--------------*/

WrongAnimal::WrongAnimal(void):_type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

/*-----------------OverloadingOperator---------------*/

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	_type = obj._type;
	return (*this);
}

/*------------------Setters/Getters------------------*/

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

/*-----------------MemberFunctions------------------*/

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makes a noise!" << std::endl;
}