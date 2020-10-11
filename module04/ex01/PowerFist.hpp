/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:27:14 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:28:22 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
				PowerFist(void);
				PowerFist(const PowerFist &);
		PowerFist	&operator=(const PowerFist &);
				~PowerFist(void);
			void	attack(void) const;
};

#endif
