/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:22:53 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/13 17:21:03 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/*---------------Constructor/Destructor--------------*/

Zombie::Zombie(void){}

Zombie::Zombie(std::string name):_name(name){}

Zombie::~Zombie()
{
	std::cout << _name << " destructor called" << std::endl;
}

/*----------------------Accessors--------------------*/

void	Zombie::setName(std::string name)
{
	_name = name;
}

/*-------------------MemberFunctions-----------------*/

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}