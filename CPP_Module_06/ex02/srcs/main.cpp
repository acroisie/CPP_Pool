/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:49:50 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/26 10:46:20 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/Base.hpp"
#include	"../includes/A.hpp"
#include	"../includes/B.hpp"
#include	"../includes/C.hpp"
#include	<iostream>
#include	<cstdlib>
#include	<exception>

Base*	generate(void)
{
	int	random;

	random = rand() % 3;
	if (random == 0)
		return (new A());
	else if (random == 1)
		return (new B());
	else if (random == 2)
		return (new C());
	else
		throw std::exception();
}

void	identify(Base* p)
{
	A*	classA = NULL;
	C*	classC = NULL;
	B*	classB = NULL;

	if ((classA = dynamic_cast<A*>(p)))
		std::cout << "This is Class A. (Identification made by pointer)." << std::endl; 
	if ((classB = dynamic_cast<B*>(p)))
		std::cout << "This is Class B. (Identification made by pointer)." << std::endl; 
	if ((classC = dynamic_cast<C*>(p)))
		std::cout << "This is Class C. (Identification made by pointer)." << std::endl;
}

void identify(Base& p)
{
	try
	{
		A&	classA = dynamic_cast<A &>(p);
		(void) classA;
		std::cout << "This is Class A. (Identification made by reference)." << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl; 
	}
	try
	{
		B&	classB = dynamic_cast<B &>(p);
		(void) classB;
		std::cout << "This is Class B. (Identification made by reference)." << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl; 
	}
	try
	{
		C&	classC = dynamic_cast<C &>(p);
		(void) classC;
		std::cout << "This is Class C. (Identification made by reference)." << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl; 
	}
}

int		main(void)
{
	for (size_t i = 0; i < 10; i++)
	{
		Base*	p = generate();
		identify(p);
	}
	for (size_t i = 0; i < 10; i++)
	{
		Base*	p = generate();
		identify(*p);
	}
	
	return (0);
}