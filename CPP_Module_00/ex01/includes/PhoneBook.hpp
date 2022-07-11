/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:08:19 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/11 14:12:54 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Contact.hpp"
#include <string>
#include <iostream>

class PhoneBook
{
private:
	Contact list[8];
	int		_index;

public:
	PhoneBook(void);
	~PhoneBook();

	std::string	GetString(const std::string& msg);
	void		ADD(void);
	void		SEARCH(void);
};
