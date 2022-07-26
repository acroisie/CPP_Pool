/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:58:01 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/26 16:07:25 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

/*---------------Constructor/Destructor--------------*/

HumanB::HumanB(std::string name, Weapon* weapon):_name(name), _arm(weapon){}

HumanB::HumanB(std::string name):_name(name), _arm(NULL){}

HumanB::~HumanB(){}

/*-------------------MemberFunctions-----------------*/

void	HumanB::attack(void)
{
	if (_arm != NULL)
		std::cout << _name << " attacks with their " << _arm->getType() << std::endl;
	else
		std::cout << _name << " attacks zith their fists" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_arm = &weapon;
}