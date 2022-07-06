/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:08:19 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/06 17:00:56 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Contact.hpp"

class PhoneBook
{
private:
	Contact list[8];

public:
	//iomanip
	PhoneBook(void);
	~PhoneBook();
	
};
