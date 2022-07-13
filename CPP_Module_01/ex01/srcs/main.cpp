/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:22:07 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/13 17:33:02 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie*	neganWalkers;
	Zombie*	rickWalkers;
	int		i;
	int		saviorsAmount;
	int		survivorsAmount;

	i = 0;
	saviorsAmount = 4;
	survivorsAmount = 6;
	neganWalkers = zombieHorde(saviorsAmount, "Savior");
	rickWalkers = zombieHorde(survivorsAmount, "Survivor");
	while (i < saviorsAmount)
		neganWalkers[i++].announce();
	i = 0;
	while (i < survivorsAmount)
		rickWalkers[i++].announce();
	delete []neganWalkers;
	delete []rickWalkers;

	return (0);
}