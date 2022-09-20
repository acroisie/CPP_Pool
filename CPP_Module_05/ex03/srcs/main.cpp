/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:20:11 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/20 12:04:34 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int	main(void)
{
	Intern		sbire;
	Bureaucrat	Alice("Alice", 5);
	Form		*form1;
	Form		*form2;
	Form		*form3;
	Form		*form4;

	try
	{
		form1 = sbire.makeForm("presidential pardon", "Charlotte");
		form2 = sbire.makeForm("shrubbery creation", "Danny");
		form3 = sbire.makeForm("robotomy request", "Adam");
		form1->beSigned(Alice);
		form1->execute(Alice);
		if(form1)
			delete(form1);
		form2->beSigned(Alice);
		form2->execute(Alice);
		if(form2)
			delete(form2);
		form3->beSigned(Alice);
		form3->execute(Alice);
		if(form3)
			delete(form3);
		form4 = sbire.makeForm("this one doesn't exist", "Bob");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	return (0);
}