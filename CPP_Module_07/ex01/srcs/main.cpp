/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 08:12:10 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/27 16:47:12 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int	main(void)
{
	size_t		size = 3;
	std::string	arrayString[] =
	{
		"Trek to",
		"Summit",
		"Then Paragliding"
	};
	int			arrayInt[] =
	{
		56665,
		42,
		0
	};
	float		arrayFloat[] =
	{
		56665.1,
		42.42,
		0.0
	};

	iter(arrayString, size, &funToExec);
	std::cout << std::endl;
	iter(arrayInt, size, &funToExec);
	std::cout << std::endl;
	iter(arrayFloat, size, &funToExec);

	return 0;
}

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; } int get( void ) const { return this->_n; } private:
// int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; } 

// int main() {
// int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? 
// Awesome tab2[5];

// iter( tab, 5, print );
// iter( tab2, 5, print );

// return 0;
// }