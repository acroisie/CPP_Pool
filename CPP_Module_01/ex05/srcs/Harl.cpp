/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:41:47 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/25 16:52:09 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

/*---------------Constructor/Destructor--------------*/

Harl::Harl(void){}

Harl::~Harl(){}

/*---------------PrivateMemberFunctions--------------*/

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/*----------------PublicMemberFunctions--------------*/

void Harl::complain(std::string level)
{
	int		i = 0;
	void	(Harl::* methods[4])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	index[4] =
	{
		"debug",
		"info",
		"warning",
		"error"
	};
	while (i < 4)
	{
		if (!index[i].compare(level))
			break;
		i++;
	}
	if (i == 4)
		std::cout << "Hmmmm, Harl cannot complain about this !" << std::endl;
	else
		(this->*methods[i])();
}
