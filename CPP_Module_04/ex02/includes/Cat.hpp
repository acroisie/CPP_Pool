/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/17 15:44:19 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	_brain;
public:
	Cat(void);
	Cat(std::string name);
	Cat(const Cat& copy);
	virtual ~Cat();

	Cat&	operator=(const Cat& obj);

	virtual std::string		getType(void) const;
	virtual void			makeSound(void) const;
};
