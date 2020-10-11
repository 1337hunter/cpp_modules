/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 09:23:52 by gbright           #+#    #+#             */
/*   Updated: 2020/09/14 13:13:35 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): value(0)
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
	value = what.getRawBits();
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	value = (n << pos);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	value = (int)roundf((n * 256));
}

void	Fixed::operator=(const Fixed &what)
{
	std::cout << "Assignation operator called\n";
	value = what.getRawBits();
}

std::ostream	&operator<<(std::ostream &os, const Fixed &what)
{
	os << what.toFloat();
	return os;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)value / 256;
}

int	Fixed::toInt(void) const
{
	return value >> pos;
}
