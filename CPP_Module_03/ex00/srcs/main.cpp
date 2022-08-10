/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:38:36 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/10 10:48:57 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Jill("Jill Valentine");

	Jill.attack("Nemesis");
	Jill.attack("Nemesis");
	Jill.attack("Nemesis");
	Jill.attack("Nemesis");
	Jill.attack("Nemesis");
	Jill.attack("Nemesis");
	Jill.attack("Nemesis");
	Jill.attack("Nemesis");
	Jill.attack("Nemesis");
	Jill.attack("Nemesis");
	Jill.attack("Nemesis");
	Jill.takeDamage(2);
	Jill.beRepaired(1);
	Jill.attack("Nemesis");
	Jill.takeDamage(15);
	Jill.attack("Nemesis");

	return (0);
}