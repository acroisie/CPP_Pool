/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:20:11 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/15 16:35:06 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Alice("Alice", 10);
		Bureaucrat	Bob("Bob", 150);
		Form		anoyingForm("boringForm", 20, 10);
		Form		boringForm("boringForm", 20, 10);

		std::cout << anoyingForm << std::endl;
		Alice.signForm(anoyingForm);
		std::cout << anoyingForm << std::endl;

		std::cout << boringForm << std::endl;
		Bob.signForm(boringForm);
		std::cout << boringForm << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
