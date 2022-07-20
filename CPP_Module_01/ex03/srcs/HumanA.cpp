/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:07:45 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/20 15:48:01 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

/*---------------Constructor/Destructor--------------*/

HumanA::HumanA(std::string name, Weapon& weapon):_name(name), _arm(weapon){}

HumanA::~HumanA(){}

/*-------------------MemberFunctions-----------------*/

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _arm.getType() << std::endl;
}