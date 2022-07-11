/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:55:30 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/11 20:21:44 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Contact
{
private:
	std::string	_FirstName;
	std::string	_LastName;
	std::string	_NickName;
	std::string	_DarkestSecret;
	std::string	_PhoneNumber;

public:
	Contact(void);
	~Contact();

	std::string	GetFirstName() const;
	void		SetFirstName(const std::string& FirstName);
	std::string	GetLastName() const;
	void		SetLastName(const std::string& LastName);
	std::string	GetNickName() const;
	void		SetNickName(const std::string& NickName);
	std::string	GetDarkestSecret() const;
	void		SetDarkestSecret(const std::string& DarkestSecret);
	std::string	GetPhoneNumber() const;
	void		SetPhoneNumber(const std::string& PhoneNumber);
};
