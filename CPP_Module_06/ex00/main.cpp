/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:42:03 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/26 09:24:34 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <iomanip>

void	charCast(double dToCast)
{
	if (dToCast != dToCast)
	{
		std::cout << "char	: [" << "Impossible" << "]" << std::endl;
		return ;
	}
	if (dToCast >= 32 && dToCast <= 127)
	{
		char	charCast = static_cast<char>(dToCast);
		std::cout << "char	: [" << charCast << "]" << std::endl;
	}
	else
	{
		std::cout << "char	: [" << "Non displayable" << "]" << std::endl;
	}
}

void	intCast(double dToCast)
{
	if (dToCast != dToCast)
	{
		std::cout << "int	: [" << "Impossible" << "]" << std::endl;
		return ;
	}
	if (dToCast > -2147483648 && dToCast < 2147483647)
	{
		int		integerCast = static_cast<int>(dToCast);
		std::cout << "int	: [" << integerCast << "]" << std::endl;
	}
	else
	{
		std::cout << "int	: [" << "Overflow" << "]" << std::endl;	
	}
}

void	floatCast(double dToCast)
{
	float	floatCast = static_cast<float>(dToCast);
	std::cout << "float	: [" << floatCast << "f]" << std::endl;
}

void	convert(double dToCast)
{
	charCast(dToCast);
	intCast(dToCast);
	floatCast(dToCast);
	std::cout << "double	: [" << dToCast << "]" << std::endl;
}

int		main(int argc, char **argv)
{
	std::cout << std::fixed << std::setprecision(1);
	if (argc != 2)
	{
		if (argc < 2)
			std::cout << "Please type at least one argument." << std::endl;
		if (argc > 2)
			std::cout << "Too many arguments." << std::endl;
		return (1);
	}
	std::string	arg = argv[1];
	double dToCast  = std::strtod(arg.c_str(), NULL);
	// if (argv[1][0] != '0' && argv[1][1] != '.') Rework this shit
	// {
	// 	if (dToCast == 0.0)
	// 	{
	// 		std::cout << "Impossible conversion." << std::endl;
	// 		return (1);
	// 	}	
	// }
	convert(dToCast);
	return (0);
}