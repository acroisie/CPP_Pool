/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:03:42 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/20 16:11:23 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

/*---------------Constructor/Destructor--------------*/

Weapon::Weapon(std::string type):_type(type){};

Weapon::~Weapon(){}

/*----------------------Accessors--------------------*/

std::string const&	Weapon::getType()
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}