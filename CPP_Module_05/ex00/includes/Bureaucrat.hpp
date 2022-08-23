/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:19:55 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/23 09:31:32 by acroisie         ###   ########lyon.fr   */
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
	Bureaucrat(const Bureaucrat& cpy);
	~Bureaucrat();

	Bureaucrat&	operator=(const Bureaucrat& obj);
};
