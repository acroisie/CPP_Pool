/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:29:35 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/19 14:50:05 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

/*---------------Constructor/Destructor--------------*/

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), _target("unknown")
{
	std::cout << "Default RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Target RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec())
{
	std::cout << "Copy RobotomyRequestForm constructor called." << std::endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default RobotomyRequestForm destructor called." << std::endl;
}

/*-----------------OverloadingOperator---------------*/

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	_target = obj._target;
	return (*this);
}

/*-----------------MemberFunctions------------------*/

void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (!getSigned())
		throw std::logic_error("Can't execute a non-signed form.\n");
	if (executor.getGrade() > getGradeToExec())
		throw std::logic_error("Can't execute because grade is too low.\n");
}
