/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:26:19 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/13 16:54:20 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	Zombie*	horde = new Zombie[N];
	while (i < N)
	{
		horde[i++].setName(name);
	}

	return (horde);
}