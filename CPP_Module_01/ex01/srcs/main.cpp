/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:22:07 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/13 17:10:14 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie*	neganWalkers;
	Zombie*	rickWalkers;
	int		i;

	i = 0;
	neganWalkers = zombieHorde(4, "Savior");
	rickWalkers = zombieHorde(2, "Survivor");
	while (i < 4)
		neganWalkers[i++].announce();
	i = 0;
	while (i < 2)
		rickWalkers[i++].announce();

	return (0);
}