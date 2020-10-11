/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 09:23:01 by gbright           #+#    #+#             */
/*   Updated: 2020/09/14 12:44:21 by gbright          ###   ########.fr       */
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
		int			getRawBits(void) const;
		void			setRawBits(int const raw);
};

std::ostream				&operator<<(std::ostream &os, const Fixed &what);
#endif
