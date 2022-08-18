/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:13:21 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/17 14:35:32 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain(void);
	Brain(const Brain& copy);
	virtual ~Brain();

	Brain&	operator=(const Brain& obj);
};
