/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:51:39 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 11:00:15 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &str): name(str), ap(40), weapon(0) {}

Character::~Character(void) {}

Character::Character(const Character &obj)
{
	this->name = obj.getName();
	this->ap = obj.getAP();
	this->weapon = obj.getWeapon();
}

Character	&Character::operator=(const Character &obj)
{
	this->name = obj.getName();
	this->ap = obj.getAP();
	this->weapon = obj.getWeapon();
	return *this;
}

AWeapon	*Character::getWeapon(void) const
{
	return this->weapon;
}

void	Character::recoverAP(void)
{
	if (ap < 40)
		ap = ap + 10 > 40 ? 40 : ap + 10;
}

void	Character::equip(AWeapon *wep)
{
	weapon = wep;
}

void	Character::attack(Enemy *obj)
{
	if (weapon != 0 && weapon->getAPCost() <= ap)
	{
		std::cout << this->getName() << " attacks " << obj->getType();
		std::cout << " with " << weapon->getName() << '\n';
		weapon->attack();
		obj->takeDamage(weapon->getDamage());
		ap -= weapon->getAPCost();
		if (obj->getHP() <= 0)
			delete obj;
	}
}

const std::string	&Character::getName(void) const
{
	return this->name;
}

int	Character::getAP(void) const
{
	return this->ap;
}

std::ostream	&operator<<(std::ostream &os, const Character &hero)
{
	os << hero.getName() << " has " << hero.getAP();
	if (hero.getWeapon() == 0)
		os << " and is unarmed\n";
	else
		os << " and wields a " << hero.getWeapon()->getName() << '\n';
	return os;
}
