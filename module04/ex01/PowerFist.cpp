/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:27:20 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:29:44 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50) {}

PowerFist	&PowerFist::operator=(const PowerFist &obj)
{
	this->name = obj.getName();
	this->damage = obj.getDamage();
	this->apcost = obj.getAPCost();
	return *this;
}

PowerFist::PowerFist(const PowerFist &obj)
{
	*this = obj;
}

PowerFist::~PowerFist(void) {}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *\n";
}
