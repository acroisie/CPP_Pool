/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:47:51 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/28 14:51:17 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"easyfind.hpp"

int	main(void)
{
	std::vector<int>	vect;
	std::list<int>		list;

	vect.push_back(2);
	vect.push_back(42);
	vect.push_back(7);
	vect.push_back(8);

	list.push_back(1);
	list.push_back(22);
	list.push_back(71);
	list.push_back(89);

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

	try
	{
		easyfind(list, 89);
		easyfind(list, 1);
		easyfind(list, 71);
		easyfind(list, 89);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}