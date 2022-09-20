/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:41:54 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/20 11:31:02 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include	"../includes/Intern.hpp"
#include	"../includes/PresidentialPardonForm.hpp"
#include	"../includes/RobotomyRequestForm.hpp"
#include	"../includes/ShrubberyCreationForm.hpp"

/*---------------Constructor/Destructor--------------*/

Intern::Intern(void)
{
	std::cout << "Default Intern constructor called." << std::endl;
}

Intern::Intern(const Intern& cpy)
{
	std::cout << "Copy Intern constructor called." << std::endl;
	*this = cpy;
}

Intern::~Intern(void)
{
	std::cout << "Default Intern destructor called." << std::endl;
}

/*-----------------OverloadingOperator---------------*/

Intern&	Intern::operator=(const Intern &obj)
{
	(void) obj;
	return (*this);
}

/*-----------------MemberFunctions------------------*/

Form*	Intern::ppf(std::string formName, std::string targetName)
{
	std::cout << "Intern creates " << formName << std::endl;
	return (new PresidentialPardonForm(targetName));
}

Form*	Intern::rrf(std::string formName, std::string targetName)
{
	std::cout << "Intern creates " << formName << std::endl;
	return (new RobotomyRequestForm(targetName));
}

Form*	Intern::scf(std::string formName, std::string targetName)
{
	std::cout << "Intern creates " << formName << std::endl;
	return (new ShrubberyCreationForm(targetName));
}

Form*	Intern::makeForm(std::string formName, std::string targetName)
{
	
	int		i = 0;
	Form*	ptr;

	Form*	(Intern::*formType[3])(std::string, std::string) =
	{
		&Intern::ppf,
		&Intern::rrf,
		&Intern::scf
	};

	std::string	index[3] =
	{
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	while (i < 3)
	{
		if (!index[i].compare(formName))
			break;
		i++;
	}
	if (i == 3)
		throw std::logic_error("Hmmmm, " + formName + " doesn't exist!\n");
	else
		ptr = (this->*formType[i])(formName, targetName);
	return (ptr);
}