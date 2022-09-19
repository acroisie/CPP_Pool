/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:19:55 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/19 11:37:48 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExec;
public:
	Form(void);
	Form(std::string name, int gradeToSign, int _gradeToExec);
	Form(const Form& cpy);
	~Form();

	Form&	operator=(const Form& obj);

	class	GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	
	void			beSigned(const Bureaucrat& bureaucrat);
	void			signForm(void);

	// virtual void 	execute(Bureaucrat const & executor) = 0;

	std::string		getName() const;
	bool			getSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExec() const;
};

std::ostream &operator<<(std::ostream& os, Form const& obj);