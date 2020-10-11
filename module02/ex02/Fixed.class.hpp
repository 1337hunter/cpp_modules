/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 09:23:01 by gbright           #+#    #+#             */
/*   Updated: 2020/09/14 17:30:37 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
		int			value;
		static const int	pos = 8;
	public:
					Fixed(void);
					~Fixed(void);
					Fixed(Fixed const &what);
					Fixed(const int n);
					Fixed(const float n);
		float 			toFloat(void) const;
		int			toInt(void) const; 
		void			operator=(const Fixed &what);
		bool			operator>(const Fixed &what) const;
		bool			operator<(const Fixed &what) const;
		bool                    operator<=(const Fixed &what) const;
		bool                    operator>=(const Fixed &what) const;
		bool                    operator==(const Fixed &what) const;
		bool                    operator!=(const Fixed &what) const;
		Fixed                   operator+(const Fixed &what) const;
		Fixed                   operator-(const Fixed &what) const;
		Fixed                   operator*(const Fixed &what) const;
		Fixed                   operator/(const Fixed &what) const;
		Fixed			operator++(void);
		Fixed			operator++(int);
		Fixed                   operator--(void);
		Fixed                   operator--(int);
		int			getRawBits(void) const;
		void			setRawBits(int const raw);
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
                static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &what);
#endif
