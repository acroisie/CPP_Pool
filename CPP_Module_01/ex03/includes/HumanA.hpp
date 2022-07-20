/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:07:02 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/20 16:17:33 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_arm;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack(void);
};

