/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:54 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/16 16:47:51 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/*---------------Constructor/Destructor--------------*/

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(std::string name)
{
	std::cout << "Dog name constructor called" << std::endl;
	_type = name;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete _brain;
}

/*-----------------OverloadingOperator---------------*/

Dog&	Dog::operator=(const Dog& obj)
{
	_type = obj._type;
	return (*this);
}

/*------------------Setters/Getters------------------*/

std::string	Dog::getType(void) const
{
	return (_type);
}

/*-----------------MemberFunctions------------------*/

void	Dog::makeSound(void) const
{
	std::cout << "Bark, bark!" << std::endl;
}