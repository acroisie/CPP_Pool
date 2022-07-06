/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:08:19 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/06 16:06:20 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "../includes/Contact.hpp"

class PhoneBook
{
private:
	Contact contact[8];

public:
	PhoneBook(void);
	~PhoneBook();
	
};
