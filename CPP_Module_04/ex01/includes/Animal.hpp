/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/17 15:43:34 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
	Animal(void);
	Animal(const Animal& copy);
	virtual ~Animal();

	virtual Animal&	operator=(const Animal& obj);
	
	virtual std::string	getType(void) const;
	virtual void 		makeSound(void) const;
};
