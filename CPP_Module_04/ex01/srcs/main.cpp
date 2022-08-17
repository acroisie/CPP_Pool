/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:05:29 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/17 17:14:06 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Dog.hpp"

// int	main(void)
// {
	// const Animal*	tab[100];

	// for (int i = 0; i < 100; i++)
	// {
	// 	if (i < 50)
	// 		tab[i] = new Dog;
	// 	else
	// 		tab[i] = new Cat;
	// }
	// for (int i = 0; i < 100; i++)
	// // 	delete tab[i];
	// Cat	chat1;

	// Cat	chat2 = chat1;
	// (void)chat2;
	// return (0);
// }

int main()
{
	Animal* j = new Dog();
	Cat* i = new Cat();
	Animal* t = new Cat(*i);

	delete j;//should not create a leak
	delete i;
	delete t;
return (0);
}