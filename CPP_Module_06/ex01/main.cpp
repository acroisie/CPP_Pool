/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:53:39 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/23 15:32:17 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<stdint.h>

typedef	struct Data
{
	std::string	nickName;
}Data;

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		Alice;
	uintptr_t	Bob;
	Data		*Charlotte;
	
	Alice.nickName = "Aloha";
	Bob = serialize(&Alice);
	Charlotte = deserialize(Bob);
	std::cout << "Alice ptr_address: " << &Alice << std::endl;
	std::cout << "Bob ptr_address: " << &Bob << std::endl;
	std::cout << "Charlotte ptr_address: " << &Charlotte << std::endl;
	std::cout << "Charlotte->nickName: " << Charlotte->nickName << std::endl;
	
	return (0);
}