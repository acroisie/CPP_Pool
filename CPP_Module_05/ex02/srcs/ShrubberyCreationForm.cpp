/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:29:35 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/19 16:53:44 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

/*---------------Constructor/Destructor--------------*/

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 137, 145), _target("unknown")
{
	std::cout << "Default ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 137, 145), _target(target)
{
	std::cout << "Target ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec())
{
	std::cout << "Copy ShrubberyCreationForm constructor called." << std::endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default ShrubberyCreationForm destructor called." << std::endl;
}

/*-----------------OverloadingOperator---------------*/

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	_target = obj._target;
	return (*this);
}

/*-----------------MemberFunctions------------------*/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw std::logic_error("Can't execute a non-signed form.\n");
	if (executor.getGrade() > getGradeToExec())
		throw std::logic_error("Can't execute because grade is too low.\n");
	std::ofstream	output((std::string)_target + "_shrubbery", std::ios_base::app);
	
	output <<	"            ,@@@@@@@," << std::endl <<
				"    ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl <<
				" ,&\\%\\%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl <<
				",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl <<
				"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl <<
				"%&&%/ %&\\%\\%&&@@\\ V /@@' `88\\8 `/88'" << std::endl <<
				"`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl <<
				"    |o|        | |         | |" << std::endl <<
				"    |.|        | |         | |" << std::endl <<
				" \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	output.close();
}
