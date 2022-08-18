/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/16 08:22:06 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& copy);
	virtual ~WrongAnimal();

	WrongAnimal&	operator=(const WrongAnimal& obj);
	
	virtual std::string	getType(void) const;
	virtual void 		makeSound(void) const;
};
