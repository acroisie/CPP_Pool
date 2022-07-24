/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:44:50 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/23 10:07:06 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		// std::cout << "Wrong amount of arguments" << std::endl;
		// std::cout << "You must input <filename> <s1> <s2>" << std::endl;
		std::ifstream fichier("test.txt", ios::in);
		
		return (1);
	}
}