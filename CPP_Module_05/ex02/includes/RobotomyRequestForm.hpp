/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:28:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/19 14:46:10 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	~RobotomyRequestForm();

	RobotomyRequestForm&	operator=(const RobotomyRequestForm& obj);

	void					execute(Bureaucrat const & executor);
};

