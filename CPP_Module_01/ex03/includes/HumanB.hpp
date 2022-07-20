/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:56:42 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/20 16:23:18 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon*		_arm;
public:
	HumanB(std::string name, Weapon* weapon);
	HumanB(std::string name);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon& weapon);
};
