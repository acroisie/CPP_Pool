/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:59:59 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/27 16:26:07 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/Array.hpp"

int main(void)
{
    Array<int>          intArray;
    Array<std::string>  stringArray(5);
    Array<float>        floatArray(2);

    stringArray[0] = "Climb";
    stringArray[1] = "to the summit";
    stringArray[2] = "then, ";
    stringArray[3] = "top down";
    stringArray[4] = "paraglide.";

    floatArray[0] = 0.42;
    floatArray[1] = 0.0;

    std::cout << "intArray size:    " << intArray.size() << std::endl;
    std::cout << "stringArray size: " << stringArray.size() << std::endl;
    
    try
    {
        std::cout << stringArray[0] << std::endl;
        std::cout << stringArray[2] << std::endl;
        std::cout << stringArray[4] << std::endl;
        std::cout << stringArray[100] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        std::cout << floatArray[1] << std::endl;
        std::cout << floatArray[-2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}