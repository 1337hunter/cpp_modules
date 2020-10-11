/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:48:56 by gbright           #+#    #+#             */
/*   Updated: 2020/09/14 17:40:38 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"


int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	Fixed	a1(2.2f);
	Fixed	a2(2.2f);
	
	if (c > b)
		std::cout << "c > b\n";
	if (!(c < b))
		std::cout << "!(b < c)\n";
	std::cout << c + b << std::endl;
	std::cout << c - b << std::endl;
	std::cout << a1 * a2 << std::endl;
	std::cout << a1 / a2 << std::endl;
	{
		std::cout << "*************************************\n";
		Fixed aa;
		Fixed const bb( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << aa << std::endl;
		std::cout << ++aa << std::endl;
		std::cout << aa << std::endl;
		std::cout << aa++ << std::endl;
		std::cout << aa << std::endl;
		std::cout << bb << std::endl;
		std::cout << Fixed::max( aa, bb ) << std::endl;
		std::cout << Fixed::min( aa, bb ) << "   < This is my min test" << std::endl;
	}
}
