/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 18:00:22 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 21:01:07 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	type = str;
}

void			Weapon::setType(std::string str)
{
	type = str;
}

const std::string	&Weapon::getType(void)
{
	return type;
}
