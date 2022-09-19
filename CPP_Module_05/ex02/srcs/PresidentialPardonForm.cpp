/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:29:35 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/19 14:50:15 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

/*---------------Constructor/Destructor--------------*/

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 72, 45), _target("unknown")
{
	std::cout << "Default PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 72, 45), _target(target)
{
	std::cout << "Target PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec())
{
	std::cout << "Copy PresidentialPardonForm constructor called." << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default PresidentialPardonForm destructor called." << std::endl;
}

/*-----------------OverloadingOperator---------------*/

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	_target = obj._target;
	return (*this);
}

/*-----------------MemberFunctions------------------*/

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (!getSigned())
		throw std::logic_error("Can't execute a non-signed form.\n");
	if (executor.getGrade() > getGradeToExec())
		throw std::logic_error("Can't execute because grade is too low.\n");
}
