/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:54 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/17 17:13:41 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

/*---------------Constructor/Destructor--------------*/

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(std::string name)
{
	std::cout << "Cat name constructor called" << std::endl;
	_type = name;
	_brain = new Brain();
}

Cat::Cat(const Cat& copy):_brain(NULL)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete _brain;
}

/*-----------------OverloadingOperator---------------*/

Cat&	Cat::operator=(const Cat& obj)
{
	delete _brain;
	_brain = new Brain(*obj._brain);

	return (*this);
}

/*------------------Setters/Getters------------------*/

std::string	Cat::getType(void) const
{
	return (_type);
}

/*-----------------MemberFunctions------------------*/

void	Cat::makeSound(void) const
{
	std::cout << "Meow, meow!" << std::endl;
}