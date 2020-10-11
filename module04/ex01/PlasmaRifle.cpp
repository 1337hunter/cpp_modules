/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 12:30:08 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:24:35 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &obj)
{
	this->name = obj.getName();
	this->damage = obj.getDamage();
	this->apcost = obj.getAPCost();
	return *this;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &obj)
{
	*this = obj;
}
PlasmaRifle::~PlasmaRifle(void) {}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
