/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:27:13 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/13 12:02:37 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/*---------------Constructor/Destructor--------------*/

Bureaucrat::Bureaucrat(void):_name("unknown"), _grade(150)
{
	std::cout << "Default Bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
		if (grade < 1)
			throw GradeTooHighException();
		if (grade > 150)
			throw GradeTooLowException();
		_grade = grade;
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

Bureaucrat Bureaucrat::operator++(int)
{
	if (_grade <= 1)
		throw GradeTooHighException();
	Bureaucrat	cpy = *this;
	_grade--;
	return (cpy);
}
Bureaucrat Bureaucrat::operator--(int)
{
	if (_grade >= 150)
		throw GradeTooHighException();
	Bureaucrat	cpy = *this;
	_grade++;
	return (cpy);
}

std::ostream &operator<<(std::ostream& os, Bureaucrat const& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return (os);
}


/*---------------------Accessors--------------------*/

std::string	Bureaucrat::getName() const
{
	return(_name);
}

int			Bureaucrat::getGrade() const
{
	return(_grade);
}

/*-----------------MemberFunctions------------------*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}