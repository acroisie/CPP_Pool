/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:21:07 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/11 14:12:54 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook 	book;
	std::string line;

	while(1)
	{
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
