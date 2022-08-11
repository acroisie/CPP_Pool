/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:21:02 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/11 09:36:30 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

/*---------------Constructor/Destructor--------------*/

ScavTrap::ScavTrap(void):_gateKeeper(0)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):_gateKeeper(0)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

/*-----------------OverloadingOperator---------------*/

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	_name = obj._name;
	_hitPoints =obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return (*this);
}

/*-----------------MemberFunctions------------------*/

void	ScavTrap::guardGate(void)
{
	if (!_gateKeeper)
	{
		_gateKeeper = 1;
		std::cout << _name << " enabled gate keeper mode." << std::endl;
	}
	else
	{
		_gateKeeper = 0;
		std::cout << _name << " disabled gate keeper mode." << std::endl;
	}	
}