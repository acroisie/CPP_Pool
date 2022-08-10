/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:38:36 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/10 16:28:00 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Jill("Jill Valentine");
	ScavTrap	Chris("Chris Redfield");

	Jill.attack("Nemesis");
	Jill.takeDamage(2);
	Jill.beRepaired(1);
	Jill.takeDamage(15);
	Jill.attack("Nemesis");
	Chris.attack("Tyran");
	Chris.takeDamage(2);
	Chris.beRepaired(1);
	Chris.guardGate();
	Chris.takeDamage(100);
	Chris.attack("Tyran");
	Chris.guardGate();

	return (0);
}