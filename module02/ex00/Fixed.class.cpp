/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 09:23:52 by gbright           #+#    #+#             */
/*   Updated: 2020/09/13 13:35:28 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed(void): number(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed const &what)
{
	std::cout << "Copy constructor called\n";
	number = what.getRawBits();
}

void	Fixed::operator=(const Fixed &what)
{
	std::cout << "Assignation operator called\n";
	number = what.getRawBits();
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return number;
}

void	Fixed::setRawBits(int const raw)
{
	number = raw;
}
