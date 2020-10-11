/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 18:11:50 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 22:37:23 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
		Weapon		*club;
		std::string	name;

	public:
			HumanB(std::string str);
		void	setWeapon(Weapon &biggun);
		void	attack(void);
};

#endif
