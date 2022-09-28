/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:47:51 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/28 14:06:53 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"easyfind.hpp"

int	main(void)
{
	std::vector<int> vect;

	vect.push_back(2);
	vect.push_back(42);
	vect.push_back(7);
	vect.push_back(8);
	try
	{
		easyfind(vect, 42);
		easyfind(vect, 8);
		easyfind(vect, 7);
		easyfind(vect, 88);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}