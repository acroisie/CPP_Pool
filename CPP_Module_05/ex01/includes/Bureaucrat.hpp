/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:19:55 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/13 11:44:43 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
private:
	std::string	_name;
	int			_grade;
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& cpy);
	~Bureaucrat();

	Bureaucrat&	operator=(const Bureaucrat& obj);
	Bureaucrat	operator++(int);
	Bureaucrat	operator--(int);

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	std::string	getName() const;
	int			getGrade() const;
};

std::ostream &operator<<(std::ostream& os, Bureaucrat const& obj);