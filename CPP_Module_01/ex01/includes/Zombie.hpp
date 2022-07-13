/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:21:28 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/13 16:35:58 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();

	void	setName(std::string name);
	void	announce(void);
};


Zombie*	zombieHorde(int N, std::string name);