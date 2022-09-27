/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 08:12:10 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/27 10:52:46 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"


int	main(void)
{
	size_t		size = 3;
	std::string	arrayString[] =
	{
		"Trek to",
		"Summit",
		"Then Paragliding"
	};
	int			arrayInt[] =
	{
		56665,
		42,
		0
	};
	float		arrayFloat[] =
	{
		56665.1,
		42.42,
		0.0
	};

	iter(arrayString, size, &funToExec);
	std::cout << std::endl;
	iter(arrayInt, size, &funToExec);
	std::cout << std::endl;
	iter(arrayFloat, size, &funToExec);

	return 0;
}