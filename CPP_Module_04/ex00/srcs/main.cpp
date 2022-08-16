/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:05:29 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/16 09:55:23 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Dog.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wA = new WrongAnimal();
	const WrongAnimal* wC = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();//will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << wA->getType() << " " << std::endl;
	std::cout << wC->getType() << " " << std::endl;
	wA->makeSound();
	wC->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wA;
	delete wC;

	return 0;
}