/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:51:45 by acroisie          #+#    #+#             */
/*   Updated: 2022/08/09 08:43:10 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main(void)
{
  Fixed a;
  Fixed const b(Fixed(5.05f)*Fixed(2));

  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;

  std::cout << b << std::endl;

  std::cout << Fixed::max(a,b) << std::endl;

  return (0);
}