/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:54 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/12 15:50:54 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

/*---------------Constructor/Destructor--------------*/

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(std::string name)
{
	std::cout << "WrongCat name constructor called" << std::endl;
	_type = name;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

/*-----------------OverloadingOperator---------------*/

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	_type = obj._type;
	return (*this);
}

/*------------------Setters/Getters------------------*/

std::string	WrongCat::getType(void) const
{
	return (_type);
}

// /*-----------------MemberFunctions------------------*/

// void	WrongCat::makeSound(void) const
// {
// 	std::cout << "Woem, woem!" << std::endl;
// }