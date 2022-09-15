/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:27:13 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/15 16:16:10 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

/*---------------Constructor/Destructor--------------*/

Form::Form(void):_name("unknown"), _signed(false), _gradeToSign(50), _gradeToExec(150)
{
	std::cout << "Default Form constructor called." << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec):_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
		if (_gradeToSign < 1 || gradeToExec < 1)
			throw GradeTooHighException();
		if (_gradeToSign > 150 || gradeToExec > 150)
			throw GradeTooLowException();
	std::cout << "Default Form constructor called." << std::endl;
}

Form::Form(const Form& copy):_name(copy.getName()), _signed(copy.getSigned()), _gradeToSign(copy.getGradeToSign()), _gradeToExec(copy.getGradeToExec())
{
	std::cout << "Copy Form constructor called." << std::endl;
	*this = copy;
}

Form::~Form()
{
	std::cout << "Default Form destructor called." << std::endl;
}

/*-----------------OverloadingOperator---------------*/

Form&	Form::operator=(const Form& obj)
{
	_signed = obj._signed;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, Form const& obj)
{
	os << "-Form name: " << obj.getName() << std::endl
	<< "-Signed status: " << obj.getSigned() << std::endl
	<< "-Grade to sign: " << obj.getGradeToSign() << std::endl
	<< "-Grade to exec: " << obj.getGradeToExec() << std::endl;
	return (os);
}


/*---------------------Accessors--------------------*/

std::string	Form::getName() const
{
	return(_name);
}

bool		Form::getSigned() const
{
	return(_signed);
}

int			Form::getGradeToSign() const
{
	return(_gradeToSign);
}

int			Form::getGradeToExec() const
{
	return(_gradeToExec);
}

/*-----------------MemberFunctions------------------*/

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

void		Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw GradeTooLowException();
}
