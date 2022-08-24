/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:21:02 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/24 10:39:47 by acroisie         ###   ########lyon.fr   */
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

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

/*-----------------OverloadingOperator---------------*/

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return (*this);
}

/*-----------------MemberFunctions------------------*/

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << _name << " do some muay thai on " << target << ", involving " \
		<< _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << _name << " can't do muay thai while being dead..."\
		<< std::endl;	
	}
	else if (_energyPoints == 0)
	{
		std::cout << _name << " has no more energy points!"\
		<< std::endl;
	}
}

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