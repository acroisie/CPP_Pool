/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:15:27 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/05 17:02:42 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact():_PhoneNumber(0){}

Contact::~Contact(){}

std::string	Contact::GetFirstName() const
{
	return (this->_FirstName);
}

void	Contact::SetFirstName(std::string FirstName)
{
	this->_FirstName = FirstName;
}

std::string	Contact::GetLastName() const
{
	return (this->_LastName);
}

void	Contact::SetLastName(std::string LastName)
{
	this->_LastName = LastName;
}

std::string	Contact::GetNickName() const
{
	return (this->_NickName);
}

void	Contact::SetNickName(std::string NickName)
{
	this->_NickName = NickName;
}

std::string	Contact::GetDarkestSecret() const
{
	return (this->_DarkestSecret);
}

void	Contact::SetDarkestSecret(std::string DarkestSecret)
{
	this->_DarkestSecret = DarkestSecret;
}

int		Contact::GetPhoneNumber() const
{
	return (this->_PhoneNumber);
}

void	Contact::SetPhoneNumber(int PhoneNumber)
{
	this->_PhoneNumber = PhoneNumber;
}
