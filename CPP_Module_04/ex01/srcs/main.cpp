/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:05:29 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/17 15:43:53 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Dog.hpp"

int	main(void)
{
	const Animal*	tab[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			tab[i] = new Dog;
		else
			tab[i] = new Cat;
	}
	*tab[55] = *tab[56];
	for (int i = 0; i < 100; i++)
		delete tab[i];
	return 0;
}