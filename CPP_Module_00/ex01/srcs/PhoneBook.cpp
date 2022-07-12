/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:16:15 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/12 12:34:09 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

/*---------------Constructor/Destructor--------------*/

PhoneBook::PhoneBook(void):_index(-1){};

PhoneBook::~PhoneBook(void){};

/*----------------------Functions--------------------*/

std::string	GetString(const std::string& msg)
{
	std::string string;
	
	std::cout << "Type the " << msg << ": ";
	getline(std::cin, string);
	if (std::cin.eof())
		exit (1);
	return (string);
}

std::string	ReplaceByPoint(std::string string)
{
	if (string.length() > 9)
		string.replace(9, string.npos, ".");
	return (string);
}

/*-------------------MemberFunctions-----------------*/

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
	int			i;
	std::string	index;

	i = 0;
	std::cout << "*----------*----------*----------*----------*" << std::endl;
	std::cout << "|Index no  |First Name|Last Name |Nick Name |" << std::endl;
	std::cout << "*----------*----------*----------*----------*" << std::endl;
	while (i < 8 && list[i].GetFirstName().length() != 0)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << ReplaceByPoint(list[i].GetFirstName()) << "|";
		std::cout << std::setw(10) << ReplaceByPoint(list[i].GetLastName()) << "|";
		std::cout << std::setw(10) << ReplaceByPoint(list[i].GetNickName()) << "|" << std::endl;
		std::cout << "*----------*----------*----------*----------*" << std::endl;
		i++;
	}
	std::cout << "Type the index number of the contact you want to show: ";
	getline(std::cin, index);
	if (std::cin.eof())
		exit (1);
	if (index.length() < 0 || index.length() > 1 || list[atoi(index.c_str()) - 1].GetFirstName().length() == 0)
	{
		std::cout << "Wrong index" << std::endl;
		SEARCH();
	}
	else
	{
		std::cout << list[atoi(index.c_str()) - 1].GetFirstName() << std::endl;
		std::cout << list[atoi(index.c_str()) - 1].GetLastName() << std::endl;
		std::cout << list[atoi(index.c_str()) - 1].GetNickName() << std::endl;
		std::cout << list[atoi(index.c_str()) - 1].GetDarkestSecret() << std::endl;
		std::cout << list[atoi(index.c_str()) - 1].GetPhoneNumber() << std::endl;
	}
}