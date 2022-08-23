/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:27:13 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/23 09:37:09 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/*---------------Constructor/Destructor--------------*/

Bureaucrat::Bureaucrat(void):_name("unknown"), _grade(150)
{
	std::cout << "Default Bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "Copy Bureaucrat constructor called." << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat destructor called." << std::endl;
}

/*-----------------OverloadingOperator---------------*/

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj)
{
	_name = obj._name;
	_grade = obj._grade;
	return (*this);
}