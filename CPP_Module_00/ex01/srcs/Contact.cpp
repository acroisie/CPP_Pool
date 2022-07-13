/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:15:27 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/13 10:17:22 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

/*---------------Constructors/Destructor--------------*/

Contact::Contact(void){}

Contact::~Contact(){}

/*---------------------Accessors---------------------*/

std::string	Contact::GetFirstName() const
{
	return (_FirstName);
}

void	Contact::SetFirstName(const std::string& FirstName)
{
	_FirstName = FirstName;
}

std::string	Contact::GetLastName() const
{
	return (_LastName);
}

void	Contact::SetLastName(const std::string& LastName)
{
	_LastName = LastName;
}

std::string	Contact::GetNickName() const
{
	return (_NickName);
}

void	Contact::SetNickName(const std::string& NickName)
{
	_NickName = NickName;
}

std::string	Contact::GetDarkestSecret() const
{
	return (_DarkestSecret);
}

void	Contact::SetDarkestSecret(const std::string& DarkestSecret)
{
	_DarkestSecret = DarkestSecret;
}

std::string	Contact::GetPhoneNumber() const
{
	return (_PhoneNumber);
}

void	Contact::SetPhoneNumber(const std::string& PhoneNumber)
{
	_PhoneNumber = PhoneNumber;
}
