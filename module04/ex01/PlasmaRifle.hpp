/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 12:30:09 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:25:50 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class	PlasmaRifle: public AWeapon
{
	public:
				PlasmaRifle(void);
				~PlasmaRifle(void);
				PlasmaRifle(const PlasmaRifle &);
		PlasmaRifle	&operator=(const PlasmaRifle &);
			void	attack(void) const;

};

#endif
