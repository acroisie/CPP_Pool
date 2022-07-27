/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:44:50 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/27 13:59:42 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string		line;
	size_t			pos;

	if (argc != 4)
	{
		std::cout << "Wrong amount of arguments" << std::endl;
		std::cout << "You must input <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string		s1(argv[2]);
	std::ifstream	input(argv[1]);
	std::ofstream	output((std::string) argv[1] + "_replace.txt");
	if (input && output)
	{
		while (getline(input, line))
		{
			pos = line.find(argv[2]);
			while (pos != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, argv[3]);
				pos = line.find(argv[2], (pos + s1.length()));
			}
			output << line << std::endl;
		}
	}
	else
	{
		std::cout << "files stream error" << std::endl;
		return (1);
	}
	input.close();
	output.close();
	return (0);
}