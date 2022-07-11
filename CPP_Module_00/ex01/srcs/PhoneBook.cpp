/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:16:15 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/11 14:36:09 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

/*---------------Constructors/Destructor-------------*/

PhoneBook::PhoneBook():_index(-1)
{
	std::cout << "PhoneBook constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor called" << std::endl;
	return;
}

/*------------------Member_functions-----------------*/

std::string	GetString(const std::string& msg)
{
	std::string temp;
	
	std::cout << "Type " << msg << ": ";
	getline(std::cin, temp);
	return (temp);
}

void	PhoneBook::ADD(void)
{
	if (_index > 7)
		_index = 0;
	else
		_index++;
	list[_index].SetFirstName(GetString("First Name"));
	
}