/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/12 16:11:33 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(std::string name);
	Cat(const Cat& copy);
	virtual ~Cat(void);

	Cat&	operator=(const Cat& obj);

	virtual std::string		getType(void) const;
	virtual void			makeSound(void) const;
};
