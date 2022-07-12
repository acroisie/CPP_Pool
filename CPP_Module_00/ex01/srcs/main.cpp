/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:21:07 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/12 10:18:07 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>

void	DisplayMenu()
{
	std::cout << "*-----------------PhoneBook-----------------*" << std::endl;
	std::cout << "|    Please type one of the command below   |" << std::endl;
	std::cout << "*-------------------------------------------*" << std::endl;
	std::cout << "|      ADD     |    SEARCH    |    EXIT     |" << std::endl;
	std::cout << "*-------------------------------------------*" << std::endl;
}

int	main(void)
{
	PhoneBook 	book;
	std::string line;

	while(true)
	{
		DisplayMenu();
		std::cout << ">> ";
		getline(std::cin, line);
		if (std::cin.eof())
			exit (1);
		if (!line.compare("ADD"))
			book.ADD();
		// else if (!line.compare("SEARCH"))
		// 	book.SEARCH();
		else if (!line.compare("EXIT"))
			break;
	}

	return (0);
}
