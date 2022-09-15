/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:20:11 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/15 16:22:56 by acroisie         ###   ########lyon.fr   */
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

// int main()
// {
// 	std::string tmp2("CEO");
// 	std::string tmp("Micheline Compta");
// 	Bureaucrat master(tmp2, 12);
// 	Bureaucrat sbire(tmp, 125);

// 	try
// 	{
// 		Form toohigh("toohigh", 0, -1);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		Form toolow("toolow",151 , 2013913190);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		Form	low("prout", 113, 124);
// 		std::cout  << low << std::endl;
// 		Form high("caca", 1, 12);

// 		master.signForm( high );
// 		sbire.signForm( low );
// 		std::cout  << low << std::endl;
// 		sbire.signForm( high );
// 		Form tmp(high);
// 		std::cout << tmp << std::endl;
// 	}
// 	catch (std::exception & excep)
// 	{
// 		std::cerr << excep.what() << '\n';
// 	}
// }