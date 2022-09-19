/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:20:11 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/19 17:28:50 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int	main(void)
{
	PresidentialPardonForm	presidentialPardon("Charlotte");
	RobotomyRequestForm		robotomyRequest("Eric");
	ShrubberyCreationForm	plantTrees("garden");
	Bureaucrat				Alice("Alice", 5);
	Bureaucrat				Bob("Bob", 150);

	try
	{
		// presidentialPardon.execute(Alice);
		Alice.signForm(presidentialPardon);
		presidentialPardon.execute(Alice);
		presidentialPardon.execute(Bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		// robotomyRequest.execute(Alice);
		Alice.signForm(robotomyRequest);
		robotomyRequest.execute(Alice);
		robotomyRequest.execute(Alice);
		robotomyRequest.execute(Alice);
		robotomyRequest.execute(Alice);
		robotomyRequest.execute(Alice);
		robotomyRequest.execute(Alice);
		robotomyRequest.execute(Alice);
		robotomyRequest.execute(Alice);
		robotomyRequest.execute(Bob);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		// plantTrees.execute(Alice);
		Alice.signForm(plantTrees);
		plantTrees.execute(Alice);
		plantTrees.execute(Bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}