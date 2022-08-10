/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:32:39 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/10 16:03:05 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool	_gateKeeper;
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap& obj);

	void guardGate(void);
};

