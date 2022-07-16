/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:28:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/16 11:44:53 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		variable = "HI THIS IS BRAIN";
	std::string*	stringPTR = &variable;
	std::string&	stringREF = variable;

	std::cout << &variable << std::endl << stringPTR << std::endl << &stringREF << std::endl;
	std::cout << variable << std::endl << *stringPTR << std::endl << stringREF << std::endl;

	return (0);
}