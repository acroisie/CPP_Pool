/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:55:30 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/06 14:31:43 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #ifndef CONTACT
// # define CONTACT

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
private:
	std::string	_FirstName;
	std::string	_LastName;
	std::string	_NickName;
	std::string	_DarkestSecret;
	int			_PhoneNumber;

public:
	Contact(void);
	~Contact();

	std::string	GetFirstName() const;
	void		SetFirstName(std::string FirstName);
	std::string	GetLastName() const;
	void		SetLastName(std::string LastName);
	std::string	GetNickName() const;
	void		SetNickName(std::string NickName);
	std::string	GetDarkestSecret() const;
	void		SetDarkestSecret(std::string DarkestSecret);
	int			GetPhoneNumber() const;
	void		SetPhoneNumber(int PhoneNumber);
};

// #endif
