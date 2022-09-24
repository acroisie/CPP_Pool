/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:49:50 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/24 15:58:34 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/Base.hpp"
#include	"../includes/A.hpp"
#include	"../includes/B.hpp"
#include	"../includes/C.hpp"
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
	A*	classA;
	B*	classB;
	C*	classC;

	
}

int		main(void)
{
	for (size_t i = 0; i < 10; i++)
	{
		/* code */
	}
	
	return (0);
}