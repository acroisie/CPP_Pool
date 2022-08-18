/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/16 16:45:19 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	_brain;
public:
	Dog(void);
	Dog(std::string name);
	Dog(const Dog& copy);
	virtual ~Dog();

	Dog&	operator=(const Dog& obj);

	virtual std::string		getType(void) const;
	virtual void			makeSound(void) const;
};
