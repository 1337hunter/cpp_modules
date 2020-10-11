/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:00:24 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 10:42:18 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
	protected:
		std::string	name;
		int		damage;
		int		apcost;
	public:
				AWeapon(std::string const &name, int apcost, int damage);
				AWeapon(void);
				AWeapon(const AWeapon &wp);
		virtual 	~AWeapon(void);
		int 		getAPCost(void) const;
		int 		getDamage(void) const;
		virtual void 	attack(void) const = 0;
		std::string const       &getName(void) const;
		AWeapon		&operator=(const AWeapon &wp);
};

#endif
