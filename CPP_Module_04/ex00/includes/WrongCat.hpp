/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:34:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/12 16:11:33 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(std::string name);
	WrongCat(const WrongCat& copy);
	virtual ~WrongCat(void);

	WrongCat&	operator=(const WrongCat& obj);

	virtual std::string		getType(void) const;
	// virtual void			makeSound(void) const;
};
