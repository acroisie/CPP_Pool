/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:20:11 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/19 14:25:03 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	plantTrees("garden");
	Bureaucrat				Alice("Alice", 10);
	Bureaucrat				Bob("Bob", 150);

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
