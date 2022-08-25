/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:19:55 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/25 12:26:01 by acroisie         ###   ########lyon.fr   */
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
	Bureaucrat&	operator++(void);
	Bureaucrat&	operator--(void);

	Class
	{
		GradeTooHighException(void);
	}
	void		GradeTooLowException(void);

	std::string	getName() const;
	int			getGrade() const;
};
