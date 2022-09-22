/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:42:03 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/22 11:39:46 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <iomanip>

void	convert(double dToCast)
{
	if (dToCast >= 32 && dToCast <= 127)
	{
		char	charCast = static_cast<char>(dToCast);
		std::cout << "char	: [" << charCast << "]" << std::endl;
	}
	else
	{
		std::cout << "char	: [" << "Non displayable" << "]" << std::endl;
	}
	int		integerCast = static_cast<int>(dToCast);
	std::cout << "int	: [" << integerCast << "]" << std::endl;
	float	floatCast = static_cast<float>(dToCast);
	std::cout << "float	: [" << floatCast << "f]" << std::endl;
	float	doubleCast = static_cast<double>(dToCast);
	std::cout << "double	: [" << doubleCast << "]" << std::endl;
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
	convert(dToCast);
	return (0);
}