/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:08:19 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/12 10:41:19 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook
{
private:
	Contact list[8];
	int		_index;

public:
	PhoneBook(void);
	~PhoneBook();

	void	ADD(void);
	void	SEARCH(void);
};
