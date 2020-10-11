/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 09:23:52 by gbright           #+#    #+#             */
/*   Updated: 2020/09/14 17:36:59 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): value(0)
{
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(Fixed const &what)
{
	value = what.getRawBits();
}

Fixed::Fixed(const int n)
{
	value = (n << pos);
}

Fixed::Fixed(const float n)
{
	value = (int)roundf((n * 256));
}

void	Fixed::operator=(const Fixed &what)
{
	value = what.getRawBits();
}

std::ostream	&operator<<(std::ostream &os, const Fixed &what)
{
	os << what.toFloat();
	return os;
}

bool    Fixed::operator>(const Fixed &what) const
{
        return this->value > what.value ? true : false;
}

bool	Fixed::operator<(const Fixed &what) const
{
	return this->value < what.value ? true : false;
}

bool    Fixed::operator>=(const Fixed &what) const
{
        return this->value >= what.value ? true : false;
}

bool    Fixed::operator<=(const Fixed &what) const
{
        return this->value <= what.value ? true : false;
}

bool    Fixed::operator==(const Fixed &what) const
{
        return this->value == what.value ? true : false;
}

bool    Fixed::operator!=(const Fixed &what) const
{
        return this->value != what.value ? true : false;
}

Fixed	Fixed::operator+(const Fixed &what) const
{
	Fixed	ret;

	ret.value = this->value + what.value;
        return ret;
}

Fixed   Fixed::operator-(const Fixed &what) const
{
        Fixed   ret;

        ret.value = this->value - what.value;
        return ret;
}

Fixed	Fixed::operator*(const Fixed &what) const
{
	Fixed   ret;

	ret.value = (int)(((long)this->value * (long)what.value) / 256);
	return ret;
}

Fixed	Fixed::operator/(const Fixed &what) const
{
	Fixed   ret;

	ret.value = (int)(((long)this->value / (long)what.value) * 256);
	return ret;
}

Fixed	Fixed::operator++(void)
{
	++value;
	return Fixed((float)value / 256);
}

Fixed	Fixed::operator++(int)
{
	return Fixed((float)(value++) / 256);
}

Fixed   Fixed::operator--(void)
{
        return Fixed(--value);
}

Fixed   Fixed::operator--(int)
{
        return Fixed(value--);
}

int	Fixed::getRawBits(void) const
{
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return a > b ? b : a;
}

const Fixed   &Fixed::min(const Fixed &a, const Fixed &b)
{
        return a > b ? b : a;
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
        return a < b ? b : a;
}

const Fixed   &Fixed::max(const Fixed &a, const Fixed &b)
{
        return a < b ? b : a;
}
