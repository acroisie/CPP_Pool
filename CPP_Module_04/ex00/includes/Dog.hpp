/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/12 16:11:40 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(std::string name);
	Dog(const Dog& copy);
	virtual ~Dog(void);

	Dog&	operator=(const Dog& obj);

	virtual std::string		getType(void) const;
	virtual void			makeSound(void) const;
};
