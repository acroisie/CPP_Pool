/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:41:45 by acroisie          #+#    #+#             */
/*   Updated: 2022/07/25 16:53:28 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(void)
{
	Harl	dude;

	dude.complain("debug");
	dude.complain("info");
	dude.complain("warning");
	dude.complain("error");
	dude.complain("weather");
	return (0);
}