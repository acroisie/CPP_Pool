/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:04:46 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/20 16:11:36 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon();

	std::string const&	getType(void);
	void				setType(std::string type);
};
