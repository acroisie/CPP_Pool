/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:16:15 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/12 10:27:26 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

/*---------------Constructors/Destructor-------------*/

PhoneBook::PhoneBook(void):_index(-1){};

PhoneBook::~PhoneBook(void){};

/*------------------Member_functions-----------------*/

std::string	GetString(const std::string& msg)
{
	std::string string;
	
	std::cout << "Type the " << msg << ": ";
	getline(std::cin, string);
	if (std::cin.eof())
		exit (1);
	return (string);
}

void	PhoneBook::ADD(void)
{
	if (_index > 7)
		_index = 0;
	else
		_index++;
	list[_index].SetFirstName(GetString("First Name"));
	list[_index].SetLastName(GetString("Last Name"));
	list[_index].SetNickName(GetString("Nickname"));
	list[_index].SetDarkestSecret(GetString("Darkest secret"));
	list[_index].SetPhoneNumber(GetString("Phone Number"));
}

void	PhoneBook::SEARCH(void)
{
	std::cout << "*----------*----------*----------*----------*" << std::endl;
	std::cout << "|Index no  |First Name|Last Name |Nick Name |" << std::endl;
	std::cout << "*----------*----------*----------*----------*" << std::endl;
}