/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:28:20 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/10 10:47:29 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/*---------------Constructor/Destructor--------------*/

ClapTrap::ClapTrap(std::string name):_name(name), _hitPoints(10)\
, _energyPoints(10), _attackDamage(10)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

/*-----------------OverloadingOperator---------------*/

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	_name = obj._name;
	_hitPoints =obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return (*this);
}

/*-----------------MemberFunctions------------------*/

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << _name << " attack " << target << ", causing " \
		<< _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << _name << " can't attack while being dead..."\
		<< std::endl;	
	}
	else if (_energyPoints == 0)
	{
		std::cout << _name << " has no more energy, need some holidays"\
		<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << _name << " take " << amount << " points of damage!"\
		 << std::endl;
		if (_hitPoints < 0)
			std::cout << "And now it's finish for " << _name << std::endl;
	}
	else
	{
		std::cout << "Useless attack, because " << _name << " is already \
		dead..." <<  std::endl;	
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Holidays finaly there for " << _name << "!" << std::endl;	
	_energyPoints += amount;
}