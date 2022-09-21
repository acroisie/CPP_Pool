/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:42:03 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/21 17:15:16 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <iomanip>

void	convert(std::string arg)
{
	std::cout << std::fixed << std::setprecision(2);
	if (arg.length() == 1) //Char
	{
		if ((arg[0] >= 58 && arg[0] <= 127) || (arg[0] >= 32 && arg[0] <= 47))
		{
			std::cout << "char	: [" << arg[0] << "]" << std::endl;
			int	integerCast = static_cast<int>(arg[0]);
			std::cout << "int	: [" << integerCast << "]" << std::endl;
			float floatCast = static_cast<float>(integerCast);
			std::cout << "float	: [" << floatCast << "]" << std::endl;
			float doubleCast = static_cast<double>(integerCast);
			std::cout << "double	: [" << doubleCast << "]" << std::endl;
		}
	}
}


int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc < 2)
			std::cout << "Please type at least one argument." << std::endl;
		if (argc > 2)
			std::cout << "Too many arguments." << std::endl;
		return (1);
	}
	std::string	arg = argv[1];
	convert(arg);
	return (0);
}