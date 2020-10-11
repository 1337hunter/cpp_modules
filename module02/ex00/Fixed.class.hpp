/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 09:23:01 by gbright           #+#    #+#             */
/*   Updated: 2020/09/13 13:35:00 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{
		int			number;
		static const int	pos = 8;
	public:
					Fixed(void);
					~Fixed(void);
					Fixed(Fixed const &what);
		void			operator=(const Fixed &what);
		int			getRawBits(void) const;
		void			setRawBits(int const raw);
};

#endif
