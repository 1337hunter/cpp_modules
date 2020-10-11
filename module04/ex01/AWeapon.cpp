/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:01:25 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 10:45:24 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {} //: name(""), damage(0), apcost(0) {}

AWeapon::~AWeapon(void) {}

AWeapon::AWeapon(std::string const &str, int ap, int dmg): name(str), damage(dmg), apcost(ap) {}

AWeapon::AWeapon(const AWeapon &wp) 
{
	this->name = wp.getName();
	this->apcost = wp.getAPCost();
	this->damage = wp.getDamage();
}

std::string const	&AWeapon::getName(void) const
{
	return name;
}

int	AWeapon::getAPCost(void) const
{
	return apcost;
}

int	AWeapon::getDamage(void) const
{
	return damage;
}

AWeapon	&AWeapon::operator=(const AWeapon &wp)
{
	this->name = wp.getName();
	this->apcost = wp.getAPCost();
	this->damage = wp.getDamage();
	return *this;
}
